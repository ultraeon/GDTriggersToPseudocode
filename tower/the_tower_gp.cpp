// gameplay version

// all variables and objects follow format (name)g(id)g(id)...
// if an object is the parent of a group it will be (name)p(id)
// variable declaration - built in variables
int attempts;
int mainTime;
const float PI = 3.1415926

// builtin objects
Player player;

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
Auxiliary miniBlockHelper1g124g127;
Block miniBlocksg126[]; // like 30 of these make up the wiggly bridge thing
Auxiliary miniBlockHelper2g128;
Saw saw1g132;
Saw saw2g134;
Gear spinningPlatform1CentralGearg146g148;
Platform spinningPlatform1LeftMiddlePlatformg146g149; // dang thats a long name
Platform spinningPlatform1TopMiddlePlatformg146g152;
Platform spinningPlatform1RightMiddlePlatformg146g154;
Platform spinningPlatform1BottomMiddlePlatformg146g156;
Platform spinningPlatform1LeftPlatformg150; // two non middle ones
Platform spinningPlatform1TopPlatformg153; // ^
Platform spinningPlatform1RightPlatformg155; // ^
Platform spinningPlatform1BottomPlatformg157; // ^

Gear spinningPlatform2CentralGearg158g159;
Platform spinningPlatform2LeftMiddlePlatformg158g162; // dang thats a long name pt 2
Platform spinningPlatform2TopMiddlePlatformg158g164;
Platform spinningPlatform2RightMiddlePlatformg158g166;
Platform spinningPlatform2BottomMiddlePlatformg158g168;
Platform spinningPlatform2LeftPlatformg161; // two non middle ones
Platform spinningPlatform2TopPlatformg163; // ^
Platform spinningPlatform2RightPlatformg165; // ^
Platform spinningPlatform2BottomPlatformg167; // ^

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
void rotate(Object center, float radians, float seconds);
void rotate(float radians, float seconds);
void scale(Object center, int xScale, int yScale, float seconds);
void scale(int xScale, int yScale, float seconds);
void follow(Object obj, float seconds);

// non event functions
// functions without a spawn call won't have a group id added
void setStartPosition() { // built in function
  player.setPosition(spawnWallg1.getPosition());
}

void coinPickupg4() {
  coinsi2++;
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

void boxShakeg45() {
  box1g22g44.move(0, -1, 0.5);
  box3g35g44.move(0, -1, 0.5);
  box4g22g44.move(0, -1, 0.5);
  box5g44g61.move(0, -1, 0.5);
  box7g44g65.move(0, -1, 0.5);
  sleep(0.5);
  box1g22g44.move(0, -1, 0.5);
  box3g35g44.move(0, -1, 0.5);
  box4g22g44.move(0, -1, 0.5);
  box5g44g61.move(0, -1, 0.5);
  box7g44g65.move(0, -1, 0.5);
  sleep(0.5);
  boxShakeg45();
}

void handleFireball1g73() {
  fireball1g74.move(0, -60, 0.72);
  sleep(unk);
  fireball1ExplosionHitboxg114.move(0, 10, 0); 
  sleep(unk);
  fireball1ExplosionHitboxg114.move(0, -10, 0); 
  fireball1g74.move(0, 60, 0);
}

void handleFireball2g73() { // 74->83, 114->115
  fireball2g83.move(0, -60, 0.72);
  sleep(unk);
  fireball2ExplosionHitboxg115.move(0, 10, 0); 
  sleep(unk);
  fireball2ExplosionHitboxg115.move(0, -10, 0); 
  fireball2g83.move(0, 60, 0);
}

void handleFireball3g73() { // 74->93, 114->116
  fireball3g93.move(0, -60, 0.72);
  sleep(unk);
  fireball3ExplosionHitboxg116.move(0, 10, 0); 
  sleep(unk);
  fireball3ExplosionHitboxg116.move(0, -10, 0); 
  fireball3g93.move(0, 60, 0);
}

void handleFireball4g73() { // 74->103, 114->117
  fireball4g103.move(0, -60, 0.72);
  sleep(unk);
  fireball4ExplosionHitboxg117.move(0, 10, 0); 
  sleep(unk);
  fireball4ExplosionHitboxg117.move(0, -10, 0); 
  fireball4g103.move(0, 60, 0);
}

void handleFireball5g73() { // 74->110, 114->118
  fireball5g110.move(0, -60, 0.72);
  sleep(unk);
  fireball5ExplosionHitboxg118.move(0, 10, 0); 
  sleep(unk);
  fireball5ExplosionHitboxg118.move(0, -10, 0); 
  fireball5g110.move(0, 60, 0);
}

void handleFireballSequenceg97() { // this might be wrong lmao
  handleFireball1g73();
  sleep(unk);
  handleFireball2g73();
  sleep(unk);
  handleFireball3g73();
  sleep(unk);
  handleFireball4g73();
  sleep(unk);
  handleFireball5g73();
  sleep(unk);
  handleFireballSequenceg97();
}

void moveMiniBlockHelpersg125() {
  miniBlockHelper1g124g127.move(-160, 0, 5); 
  miniBlockHelper1g128.move(-160, 0, 5); 
  miniBlockHelper1g128.move(160, 0, 0); 
  sleep(unk);
  miniBlockHelper1g124g127.move(160, 0, 0); 
  miniBlockHandlingg125();
}

void startMovingBridgeHandlingg129() {
  moveMiniBlockHelpersg125();
  final int length = 10;
  final int maxY = -23;
  final int originalY = miniBlock[0].getY();
  int deltaX;
  double proportion;
  while(1 = 1) { // complex stuff is area moves
    for(Block miniBlock : miniBlocksg126) {
      deltaX = abs((miniBlockHelper1g124g127.getX() - miniBlock.getX()));
      proportion = 1.0 - (1.0 * deltaX / length);
      if(proportion > 0) {
        miniBlock.setY(originalY - proportion * maxY);
      }
      else {
        deltaX = abs((miniBlockHelper2g128.getX() - miniBlock.getX()));
        proportion = 1.0 - (1.0 * deltaX / length);
        if(proportion > 0) {
          miniBlock.setY(originalY - proportion * maxY);
        }
        else {
          miniBlock.setY(originalY);
        }
    }
  }
}

void handleSaw1g133() {
  saw1g132.move(50, 0, 2.01); // gradually desyncs lol 
  saw1g132.move(-50, 0, 2); 
  handleSaw1g133();
}

void handleSaw2g133() { // 132->134
  saw2g134.move(50, 0, 2.01);
  saw2g134.move(-50, 0, 2); 
  handleSaw2g133();
}

void startMovingSawHandlingg136() {
  handleSaw1g133(); 
  sleep(unk); 
  handleSaw2g133();
}

void startSpinningPlatformsg147() { // naming these things is hard man :(
  spinningPlatform1LeftPlatformg150.follow(spinningPlatform1LeftMiddlePlatformg146g149, 9999); 
  spinningPlatform1TopPlatformg153.follow(spinningPlatform1TopMiddlePlatformg146g152, 9999); 
  spinningPlatform1RightPlatformg155.follow(spinningPlatform1RightMiddlePlatformg146g154, 9999); 
  spinningPlatform1BottomPlatformg157.follow(spinningPlatform1BottomMiddlePlatformg146g156, 9999); 
  spinningPlatform2LeftPlatformg161.follow(spinningPlatform2LeftMiddlePlatformg158g162, 9999); 
  spinningPlatform2TopPlatformg163.follow(spinningPlatform2TopMiddlePlatformg158g164, 9999); 
  spinningPlatform2RightPlatformg165.follow(spinningPlatform2RightMiddlePlatformg158g166, 9999); 
  spinningPlatform2BottomPlatformg167.follow(spinningPlatform2BottomMiddlePlatformg158g168, 9999); 
  spinningPlatform3LeftPlatformg175.follow(spinningPlatform3LeftMiddlePlatformg173g176, 9999); 
  spinningPlatform3TopPlatformg177.follow(spinningPlatform3TopMiddlePlatformg173g178, 9999); 
  spinningPlatform3RightPlatformg179.follow(spinningPlatform3RightMiddlePlatformg173g180, 9999); 
  spinningPlatform3BottomPlatformg181.follow(spinningPlatform3BottomMiddlePlatformg173g182, 9999);
  
  rotateSpinningPlatform1g151();
  sleep(0.31)
  rotateSpinningPlatform2g160(); 
  sleep(0.19);
  rotateSpinningPlatform3g183();
}

void rotateSpinningPlatform1g151() {
  spinningPlatform1CentralGearg146g148.rotate(spinningPlatform1CentralGearg146g148, 2*PI, 8);
  spinningPlatform1LeftMiddlePlatformg146g149.rotate(spinningPlatform1CentralGearg146g148, 2*PI, 8);
  spinningPlatform1TopMiddlePlatformg146g152.rotate(spinningPlatform1CentralGearg146g148, 2*PI, 8);
  spinningPlatform1RightMiddlePlatformg146g154.rotate(spinningPlatform1CentralGearg146g148, 2*PI, 8);
  spinningPlatform1BottomMiddlePlatformg146g156.rotate(spinningPlatform1CentralGearg146g148, 2*PI, 8);
  sleep(8);
  rotateSpinningPlatform1g151();
}

void rotateSpinningPlatform2g160() {
  spinningPlatform2CentralGearg158g159.rotate(spinningPlatform2CentralGearg158g159, 2*PI, 8);
  spinningPlatform2LeftMiddlePlatformg158g162.rotate(spinningPlatform2CentralGearg158g159, 2*PI, 8);
  spinningPlatform2TopMiddlePlatformg158g164.rotate(spinningPlatform2CentralGearg158g159, 2*PI, 8);
  spinningPlatform2RightMiddlePlatformg158g166.rotate(spinningPlatform2CentralGearg158g159, 2*PI, 8);
  spinningPlatform2BottomMiddlePlatformg158g168.rotate(spinningPlatform2CentralGearg158g159, 2*PI, 8);
  sleep(8);
  rotateSpinningPlatform2g160();
}

void rotateSpinningPlatform3g183() {
  spinningPlatform3CentralGearg173g174.rotate(spinningPlatform3CentralGearg173g174, -2*PI, 8);
  spinningPlatform3LeftMiddlePlatformg173g176.rotate(spinningPlatform3CentralGearg173g174, -2*PI, 8);
  spinningPlatform3TopMiddlePlatformg173g178.rotate(spinningPlatform3CentralGearg173g174, -2*PI, 8);
  spinningPlatform3RightMiddlePlatformg173g180.rotate(spinningPlatform3CentralGearg173g174, -2*PI, 8);
  spinningPlatform3BottomMiddlePlatformg173g182.rotate(spinningPlatform3CentralGearg173g174, -2*PI, 8);
  sleep(8);
  rotateSpinningPlatform3g183();
}

void startDoorSequenceg192() { // this might be incomplete
  player.toggleControl(false); // bypassable in versions 2.207 and below 
  doorButtong194.move(0, -2, 2);
  sleep(unk); 
  lowerDoorg202();
  player.toggleControl(true);
}

void lowerDoorg202() { // remap 199->200 original is ngp tho
  199.move(1, 0, 0.01);
  sleep(unk);
  199.move(-1, 0, 0.01); 
  sleep(unk);
  199.move(1, 0, 0.01);
  sleep(unk);
  199.move(-1, 0, 0.01); 
  sleep(unk);
  199.move(0, -30, 8);
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

void unka1g279() { // 276->277
  unk;
}

void unka2g279() { // 276->278
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

void onTouchBlueCoin() {
  blueCoinsi1++;
}
