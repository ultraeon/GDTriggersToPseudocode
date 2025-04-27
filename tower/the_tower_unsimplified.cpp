// unsimplified version

// all variables and objects follow format (name)g(id)g(id)...
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

SpawnWall spawnWallg1;
Object leftDownCameraBoundaryg3;
Glow torchGlow1g10;
Glow torchGlow2g11;
Box box1g22g44;
Box box4g22g44;
Box box2g23g46;
Vine vine2g27;
Vine vine4g27;
Vine vine3g30;
Vine vine1g31;
Vine vine5g34;
Vine vine6g34;
Box box3g35g44;
Box box5g44g61;
Box box7g44g65;
Box box6g46g63;
MonsterCage monsterCageg47g51;
Skeleton acidSkeletong53; // theres like 10 of these but share exact behavior
Vine vine7g59;
CameraGuide fireballCameraGuideg71;
Particle fireballParticle2g72;
Particle fireballParticle1g80;
Particle coinParticleg100; // multiple
Particle blueCoinParticleg101; // multiple
Particle fireballParticle3g119;
CameraGuide climbCameraGuideg121;
CameraGuide movingSawCameraGuideg131;
Saw saw1g132g135;
Saw saw2g134g137;
SFXHelper sawClankSFXHelperg143; // multiple sound effect proximity objects
BatSwarm batSwarmg209;
BlueCoin blueCoin3g211;
BlueCoin blueCoin1g221;
Text towerTextg296;
Text timerTextg303; // at end

// non event functions
// functions without a spawn call won't have a group id added
void setStartPosition() { // built in function
  player.setPosition(spawnWallg1.getPosition());
}

void setCameraBoundaries() {
  camera.setLeftBoundary(leftDownCameraBoundaryg3.getX());
  camera.setDownBoundary(leftDownCameraBoundaryg3.getY());
}

void incrementCoinCounterg4() {
  coinsi2++;
}

void startBoxFallg24(int box) {
  switch(box) {
    case 1: unk;
    case 2: unk;
    case 3: unk;
    case 4: unk;
    case 5: unk;
    case 6: unk;
    case 7: unk;
  }
}

void vineHandlingg28() {
  unk;
}

void startColorPulsesg41() {
  unk;
}

void startMonsterCageSwingHandlingg49() {
  unk;
}

void startVineHandlingg52() {
  unk;
}

void startAcidSkeletonHandlingg54() {
  unk;
}

void fireballCameraHandlingg69() { // nice id
  unk;
}

void resetCameraBeforeFireballsg70() {
  unk;
}

void handleFireballg73(int fireball) { // I presume the fireball matters
  switch(fireball) {
    unk;
  }
}

void handleFireballSequenceg97() { // this might be wrong lmao
  unk;
}

void resetCameraAfterFireballsg122() {
  unk;
}

void startMovingBridgeHandlingg129() {
  unk;
}

void cameraHandlingBeforeMovingSpikesg130() {
  unk;
}

void startMovingSawHandlingg136() {
  unk;
}

void handleSpinningPlatformsCamerag145() { // broke up into 2 idk if thats best
  unk;
}

void handleSpinningPlatformsSFXg145() { // a lot of unks
  unk;
}

void startSpinningPlatformsg147() { // naming these things is hard man :(
  unk;
}

void startDoorSequenceg192() { // i could switch this to an event function, but I'd rather have it as the events trigger the spawns
  unk;
}

void handleBatsg208() { // interacts with g209 ^_^
  unk;
}

void startBlueCoin3Lightingg222() { // robtop is really sporadic with his ids, goofy lil fellow
  unk;
}

void startBlueCoin1Lightingg224() { // the fog shall devour us all
  unk;
}

void stopBlueCoin3Lightingg226() { // why is this neccessary? I have no idea. You do you robtop
  unk;
}

void levelEndSequenceg235() { // the end of the level, but not the end of my suffering
  unk;
}

void startTowerTextHandlingg296() {
  unk;
}

void stopTowerTextHandlingg298() {
  towerTextOpacityHandlingg297.toggle(false);
}

void startEndWalkCamerag305() {
  unk;
}

void stopEndWalkCameraWhenBacktrackg307() { // bruh this name is long as hell i gotta make it more concise but don't know how
  unk;
}

// events will be defined as functions in the form on(event)
// for the unsimplified file include all calls, even if redundant

// generally parameters will only be passed in for remaps
// treat all non-parameter variables and objects as having global scope

void onStart() {
  setStartPosition();
  setCameraBoundaries();
  startColorPulsesg41();
  startVineHandlingg52();
  startAcidSkeletonHandlingg54();
  startTowerTextHandlingg296();
  if(attempts >= 1) { // starts at 0
    stopTowerTextHandlingg298();
  }
  attemptCounter.setOpacity(0);
  unkg67.toggle(false); // function
  unkg302.toggle(false); // function
  unkg306.toggle(false); // function
}

void onTouchBox(int box) { // parameter is what box is touched - 1-7 based on x position in level
  startBoxFallg24(box);
}
