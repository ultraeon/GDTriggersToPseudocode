// unsimplified version

// all variables and objects follow format (name)g(id)g(id)...
// variable declaration - built in variables
int attempts;
int mainTime;

// variable declaration - item ids


// object declaration - group ids corresponding to objects
// similar objects will share a class with unique names
// unique objects will share class and object name
// some groups correspond to both objects and functions, both will be listed separately
// if objects are numbered they are in left->right order across the level

SpawnWall spawnWallg1;
SFX landSFXg2;
CameraBoundary leftDownCameraBoundaryg3;
SFX coinSFXg4;
SFX landSFX2g7;
Glow torchGlow1g10;
Glow torchGlow2g11;
Box box1g22g44;
Box box4g22g44;
Box box2g23g46;
SFX landSFX3g26;
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
SFX sawClankingSFXg144;
BatSwarm batSwarmg209;
BlueCoin blueCoin3g211;
BlueCoin blueCoin1g221;
Text towerTextg296;
AlphaTrigger towerTextOpacityHandlingg297;
Text timerTextg303; // at end

// non event functions
// functions without a spawn call won't have a group id added
void setStartPosition() { // built in function
  player.position = spawnWallg1.position;
}

void setCameraBoundaries() {
  camera.leftBoundary = leftDownCameraBoundaryg3.x;
  camera.downBoundary = leftDownCameraBoundaryg3.y;
}

void startColorPulsesg41() {
  unk;
}

void startVineHandlingg52() {
  unk;
}

void startAcidSkeletonHandlingg54() {
  unk;
}

void startTowerTextHandlingg296() {
  unk;
}

void stopTowerTextHandlingg298() {
  towerTextOpacityHandlingg297.toggle(false);
}
// events will be defined as functions in the form on(event)
// for the unsimplified file include all calls, even if redundant

// generally parameters won't be passed in. just treat all variables and objects as having global scope
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
