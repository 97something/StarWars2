#include <iostream>

template <class T>
T powerlevel (T a, T b) //function template
{
  T goodpowerlevel;
  goodpowerlevel = a + b;
  return goodpowerlevel;
}

class ForceBeing {
  private:

  int power_level;
  string name;
  bool evil;

  protected:

  ForceBeing(int level) {
    power_level = level;
  }

  void setPowerLevel(int level){
    power_level = level;
  }

  void setName(string characterName){
    name = characterName;
  }

  public:

  int getPowerLevel(){
    return power_level;
  }

  string getName(){
    return name;
  }

  void setEvil(){
    evil = true;
  }

  void setGood(){
    evil = false;
  }

};

class Sith: public ForceBeing {

  public:

  int sithmod = -1;
  int powerlevel = ForceBeing.getPowerLevel;

  Sith(string sithName, int level){
    ForceBeing(level)
    setName(sithName);
    setEvil();
  }

  inline int add (int sithmod, int powerlevel) //inline function
    {
      return (sithmod + powerlevel);
    }

  int getPowerLevel(){
    return ForceBeing.getPowerLevel() - 1;
  }

  String getName() {
    return "Sith Lord: " + ForceBeing.getName();
  }
};

class Jedi: public FoceBeing{

  public:


  Jedi(string jediName, int level){
    ForceBeing(level);
    setName(jediName);
    setGood;
  }

  int getPowerLevel() {
    return ForceBeing.getPowerLevel
  }

};

class StarWars {

  public:

  static String getWinner (ForceBeing player1, ForceBeing player2) {
    return player1.getPowerLevel() > player2.getPowerLevel()  ? player1.getName() : player2.getName();
  }

  static void printWinner(string winner) {
    cout << "The Winner is: " << winner;
  }

  static void printWinner(string winner) {
    cout << winner << "has defeated their foe!"; //function overloading
  }

  int main () {
    Sith darthVader ("Darth Vader", 100);
    Jedi lukeSkywalker ("Luke Skywalker",99)
    printWinner(getWinner(darthVader, lukeSkywalker));
    printWinner(getWinner(darthVader, lukeSkywalker));
  }

};

    
  }

};