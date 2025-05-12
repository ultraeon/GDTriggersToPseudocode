// unsimplified version

// all variables and objects follow format (name)g(id)g(id)...
// if an object is the parent of a group it will be (name)p(id)
// variable declaration - built in variables
int attempts;
int mainTime;

// variable declaration - item ids
int timet1; // might be float or double
int blueCoinsi1;
int coinsi2;

// object declaration - group ids corresponding to objects
// similar objects will share a class with unique names
// unique objects will share class and object name
// some groups correspond to both objects and functions, both will be listed separately
// if objects are numbered they are in left->right order across the level

SpawnWall spawnWallg1; // invisible and at spawn
Auxiliary towerTextHelperg8; // idk what this is for
Box box1g22g44; 
Box box4g22g44;
Box box2g23g46;
Box box3g35g44; // spawn got added to g35 on this btw
Box box5g44g61;
Box box7g44g65;
Box box6g46g63;
Fireball fireball1g74;
Fireball fireball2g83;
Fireball fireball3g93;
Fireball fireball4g103;
Fireball fireball5g110;
DamageHitbox fireball1ExplosionHitboxg114;
DamageHitbox fireball2ExplosionHitboxg115;
DamageHitbox fireball3ExplosionHitboxg116;
DamageHitbox fireball4ExplosionHitboxg117;
DamageHitbox fireball5ExplosionHitboxg118;
Auxiliary miniBlockHelperg124g127; // unknown purpose
Block miniBlockg126; // like 30 of these make up the wiggly bridge thing
Saw saw1g132;
Saw saw2g134;
Axle spinningPlatform1Axleg146;
Gear spinningPlatform1CentralGearg146g148;
Platform spinningPlatform1LeftMiddlePlatformg146g149; // dang thats a long name
Platform spinningPlatform1TopMiddlePlatformg146g152;
Platform spinningPlatform1RightMiddlePlatformg146g154;
Platform spinningPlatform1BottomMiddlePlatformg146g156;
Platform spinningPlatform1LeftPlatformg150; // two non middle ones
Platform spinningPlatform1TopPlatformg153; // ^
Platform spinningPlatform1RightPlatformg155; // ^
Platform spinningPlatform1BottomPlatformg157; // ^

Axle spinningPlatform2Axleg158;
Gear spinningPlatform2CentralGearg158g159;
Platform spinningPlatform2LeftMiddlePlatformg158g162; // dang thats a long name pt 2
Platform spinningPlatform2TopMiddlePlatformg158g164;
Platform spinningPlatform2RightMiddlePlatformg158g166;
Platform spinningPlatform2BottomMiddlePlatformg158g168;
Platform spinningPlatform2LeftPlatformg161; // two non middle ones
Platform spinningPlatform2TopPlatformg163; // ^
Platform spinningPlatform2RightPlatformg165; // ^
Platform spinningPlatform2BottomPlatformg167; // ^

Axle spinningPlatform3Axleg173;
Gear spinningPlatform3CentralGearg173g174;
Platform spinningPlatform3LeftMiddlePlatformg173g176; // dang thats a long name pt 3
Platform spinningPlatform3TopMiddlePlatformg173g178;
Platform spinningPlatform3RightMiddlePlatformg173g180;
Platform spinningPlatform3BottomMiddlePlatformg173g182;
Platform spinningPlatform3LeftPlatformg175; // two non middle ones
Platform spinningPlatform3TopPlatformg177; // ^
Platform spinningPlatform3RightPlatformg179; // ^
Platform spinningPlatform3BottomPlatformg181; // ^

Button doorButtong194;
Block doorg200; // physical part
Auxiliary teleportDestinationg228; // after entering the door
Auxiliary fallingPlatformHelperg232g250; // multiple located inside the falling platform
Pillar rightPillarg233; // right of ending sequence button
Button fallingPlatformButtong234;
Block leftPillarBlockg237; // physical part that tps down
Auxiliary unkHelperg238; // idk whether its for falling platform or the camera
Ceiling leftPillarCeilingg245; // idk why this is a group
Block fallingPlatformBlockg250g255; // physical part
Block coinBlock1g257g266g289; // for coins
Block coinBlock2g260g269g289; // for blue coins
Block coinBlock3g262g272g289; // for time
LevelCoin levelCoin1g276; // for coins
LevelCoin levelCoin2g277; // for blue coins
LevelCoin levelCoin3g278; // for time

// boolean declaration(toggleable functions)
// format is t(trigger id)g(group id)...

bool t283g244;
bool tUnkg259; // coin 1 trigger
bool tUnkg261; // coin 2 trigger
bool tUnkg263; // coin 3 trigger
bool tUnkg282; // this is an item set how do i do this

// built-in function declaration
// used to highlight parameter order and the like
// unintresting and non-gameplay impacted parameters will not be included for the sake of my sanity
void sleep(float seconds);
// object method declaration
// applies to all objects
// all of these are asynchronous, assume that thread continues afterwards
void move(int deltaX, int deltaY, float seconds);
void scale(Object center, int xScale, int yScale, float seconds);
void scale(int xScale, int yScale, float seconds);

// non event functions
// functions without a spawn call won't have a group id added
void setStartPosition() { // built in function
  player.setPosition(spawnWallg1.getPosition());
}

void coinPickupg4() {
  coinsi2++;
}

void blueCoinPickupg5() {
  // this should have an increment but didn't find it unk (check later)
}

void blueCoinPickupa1g5() { // alternate version (120->212)
  unk;
}

void blueCoinPickupa2g5() { // (120->219)
  unk;
}

void startBoxFallg24() {
  box1g22g44.move(5, 0, 0.05);
  box4g22g44.move(5, 0, 0.05);
  sleep(0.05);
  box1g22g44.move(-5, 0, 0.05);
  box4g22g44.move(-5, 0, 0.05);
  sleep(0.05);
  box1g22g44.move(5, 0, 0.05);
  box4g22g44.move(5, 0, 0.05);
  sleep(0.05);
  box1g22g44.move(-5, 0, 0.05);
  box4g22g44.move(-5, 0, 0.05);
  sleep(0.05);
  box1g22g44.move(0, -70, 0.45);
  box4g22g44.move(0, -70, 0.45);
  sleep(0.45)
  box1g22g44.move(0, 70, 1);
  box4g22g44.move(0, 70, 1);
}

void unkg45() {
  unk;
}

void handleFireballg73() { // I presume the fireball matters
  unk;
}

void handleFireballSequenceg97() { // this might be wrong lmao
  unk;
}

void unkg125() {
  unk;
}

void startMovingBridgeHandlingg129() {
  unk;
}

void unkg133() {
  unk;
}

void startMovingSawHandlingg136() {
  unk;
}

void startSpinningPlatformsg147() { // naming these things is hard man :(
  unk;
}

void unkg151() {
  unk;
}

void unkg160() {
  unk;
}

void unkg183() {
  unk;
}

void startDoorSequenceg192() { // i could switch this to an event function, but I'd rather have it as the events trigger the spawns
  unk;
}

void unkg202() {
  unk;
}

void unkg213() {
  unk;
}

void unkg214() {
  unk;
}

void unkg218() {
  unk;
}

void unkg227() {
  unk;
}

void levelEndSequenceg235() { // the end of the level, but not the end of my suffering
  unk;
}

void unkg258() {
  unk;
}

void unkg264() {
  unk;
}

void unkg265() {
  unk;
}

void unkg267() {
  unk;
}

void unkg268() {
  unk;
}

void unkg270() {
  unk;
}

void unkg271() {
  unk;
}

void unkg273() {
  unk;
}

void unkg274() {
  unk;
}

void unkg275() {
  unk;
}

void unkg279() {
  unk;
}

void unkg290() {
  unk;
}

void unkg291() {
  unk;
}

// events will be defined as functions in the form on(event)
// for the unsimplified file include all calls, even if redundant

// generally parameters will only be passed in for remaps
// treat all non-parameter variables and objects as having global scope

void onStart() {
  setStartPosition();
}

void onTouchCoin() {
  coinPickupg4();
}
