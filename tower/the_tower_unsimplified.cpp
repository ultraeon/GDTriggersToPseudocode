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

SpawnWall spawnWallg1; // invisible and at spawn
Auxiliary leftDownBoundaryg3; // at x = 0 y = smth
Auxiliary alternateTeleportg6; // unused
Auxiliary towerTextHelperg8; // idk what this is for
Glow bigTorchGlowg10; // torches scattered throughout level
Glow smallTorchGlowg11; // ^
Auxiliary vine2Helperg20; // vine helpers are just used in conjunction with the scale triggers
WaterfallBackground waterfallBackgroundg21; // waterfalls scattered throughout level
Box box1g22g44; 
Box box4g22g44;
Box box2g23g46;
Vine vine2g27;
Vine vine4g27;
Vine vine8g27;
Auxiliary vine3Helperg29;
Vine vine3g30;
Vine vine1g31;
Auxiliary vine1Helperg32;
Auxiliary vine5Helperg33;
Vine vine5g34;
Vine vine6g34;
Box box3g35g44; // spawn got added to g35 on this btw
AcidSplash box2AcidSplashg39; // robtop copy and pasted these a bunch around the level but they're invisible when not animated
AcidSplash box1AcidSplashg40; // ^
AcidSplash box4AcidSplashg40;
AcidSplash box3AcidSplashg43; // this one not everywhere in level(gj robtop)
Box box5g44g61;
Box box7g44g65;
Box box6g46g63;
MonsterCage monsterCageg47g51; // this has a 2 part structure because the chain and cage swing semi-independently
Auxiliary monsterCageHelperg47g50;
Chain monsterCageChaing47;
Auxiliary monsterCageChainHelperg48;
Plant acidPlant1g53; // theres like 10 of these but share exact behavior
Plant acidPlant2g55; // again several of these with slightly different behavior from plant1
Checkpoint checkpoint1g56; // this might be a function idk man
Checkpoint checkpoint2g56; // ^
Sparkle checkpointSparkleg57; // 2 total, 1 for each checkpoint
Particle checkpointParticleg57; // ^
Vine vine7g59;
Auxiliary vine7Helperg60;
AcidSplash box5AcidSplashg62;
AcidSplash box6AcidSplashg64;
AcidSplash box7AcidSplashg66;
CameraGuide fireballCameraGuideg71;
Particle fireballExplosionParticle2g72;
Fireball fireball1g74;
Explosion fireball1Explosiong75;
CannonBlast fireball1CannonBlastg76g78;
Glow fireball1CannonGlowg77g78;
Cannon fireball1Cannong78;
Auxiliary fireball1CannonHelperg78g79;
Particle fireballExplosionParticle1g80;
Glow fireball1ExplosionGlowg81;
Fireball fireball1g83;
Explosion fireball2Explosiong84;
CannonBlast fireball2CannonBlastg85g87;
Glow fireball2CannonGlowg86g87;
Cannon fireball2Cannong87;
Auxiliary fireball2CannonHelperg87g89;
CannonBlast fireball3CannonBlastg88;
Glow fireball3CannonGlowg88;
Cannon fireball3Cannong88;
Auxiliary fireball3CannonHelperg88;
Glow fireball2ExplosionGlowg90;
Particle coinParticleg100; // multiple
Particle blueCoinParticleg101; // multiple
Particle fireballExplosionParticle3g119;
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
