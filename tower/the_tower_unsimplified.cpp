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
Auxiliary leftDownBoundaryg3; // at x = 0 y = smth
Auxiliary alternateTeleport1g6; // unused
Auxiliary towerTextHelperg8; // idk what this is for
Glow bigTorchGlowg10; // torches scattered throughout level
Glow smallTorchGlowg11; // ^
Auxiliary vine2Helperg20; // vine helpers are just used in conjunction with the scale triggers
Background waterfallBackgroundg21; // waterfalls scattered throughout level
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
CannonBlast fireball3CannonBlastg88g96;
Glow fireball3CannonGlowg88g91;
Cannon fireball3Cannong88;
Auxiliary fireball3CannonHelperg88g92;
Glow fireball2ExplosionGlowg90;
Fireball fireball3g93;
Explosion fireball3Explosiong94;
Glow fireball3ExplosionGlowg95;
CannonBlast fireball4CannonBlastg98g106;
Glow fireball4CannonGlowg98g99;
Cannon fireball4Cannong98;
Auxiliary fireball4CannonHelperg98g102;
Particle coinParticleg100; // multiple
Particle blueCoinParticleg101; // multiple
Fireball fireball4g103;
Explosion fireball4Explosiong104;
Glow fireball4ExplosionGlowg105;
CannonBlast fireball5CannonBlastg107g113;
Glow fireball5CannonGlowg107g108;
Cannon fireball5Cannong107;
Auxiliary fireball5CannonHelperg107g109;
Fireball fireball5g110;
Explosion fireball5Explosiong111;
Glow fireball5ExplosionGlowg112;
DamageHitbox fireball1ExplosionHitboxg114;
DamageHitbox fireball2ExplosionHitboxg115;
DamageHitbox fireball3ExplosionHitboxg116;
DamageHitbox fireball4ExplosionHitboxg117;
DamageHitbox fireball5ExplosionHitboxg118;
Particle fireballExplosionParticle3g119;
Sparkle blueCoin2Sparkleg120;
Glow blueCoin2Glowg120;
CameraGuide climbCameraGuideg121;
Auxiliary miniBlockHelperg124g127; // unknown purpose
Block miniBlockg126; // like 30 of these make up the wiggly bridge thing
CameraGuide movingSawCameraGuideg131;
Saw saw1g132g135;
Saw saw2g134g137;
Chain sawChain1g139;
Chain sawChain2g140;
Chain miniBlockChaing141;
Auxiliary sawClankHelperg143; // multiple sound effect proximity objects
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

Auxiliary unkSFXHelperg185; // scattered through whole level and i genuinely have no idea what these are for scattered
Auxiliary spinningPlatformSFXHelperg186; // a few of these
Auxiliary unkHelperg187; // 8 blocks above blue coin 3
Auxiliary batHelperg188;
Auxiliary unkhelperg189; // above spawn(305)
Auxiliary alternateTeleport2g190; // unused afaik
Eye doorCameraEyeg191p193; // at door self explanatory
Camera doorCamerag193;
Laser topLaserg193g196;
Laser bottomLaserg193g210;
Button doorButtong194;
Animation doorCameraAnimation1g195; // idk how these objects work
Animation doorCameraAnimation2g197; // ^
Text doorExclamationPointg198; // part of the sequence obv
Bar doorBar1g199;
Bar doorBar3g199;
Bar doorBar5g199;
Bar doorBar2g200;
Bar doorBar4g200;
Block doorg200; // physical part
Text doorTextg201; // I see you
Auxiliary doorAnimationHelper1g203; // purpose unknown left of 204
Auxiliary doorAnimationHelper2g204; // ^ right of 203 and left of I see you
Text doorTextE2g205; // 2nd e in i see you as name implies
Particle doorTextParticleg206;
Particle doorParticleg207;
Glow doorGlowg207;
BatSwarm batSwarmg209;
BlueCoin blueCoin3g211; // for lighting
Object blueCoin3Surrondingsg211; // for lighting
Sparkle blueCoin3Sparkleg212;
Glow blueCoin3Glowg212;
Sparkle blueCoin1Sparkleg219;
Glow blueCoin1Glowg219;
BlueCoin blueCoin1g221; // for lighting
Object blueCoin3Surrondingsg221; // for lighting
Auxiliary teleportDestinationg228; // after entering the door
Auxiliary alternateTeleport3g229; // why did robtop add so many unused teleports bruh
Auxiliary fallingPlatformHelperg232g250; // multiple located inside the falling platform
Pillar rightPillarg233; // right of ending sequence button
Button fallingPlatformButtong234;
Particle fallingPlatformButtonParticleg234;
Pillar leftPillarg236; // only visual part
Block leftPillarBlockg237; // physical part that tps down
Auxiliary unkHelperg238; // idk whether its for falling platform or the camera
Camera fallingPlatformCamerag239g283;
Chain fallingPlatformCameraChaing239g240; // 240 only middle I'll see if this makes code unreadable and change if needed
Eye fallingPlatformCameraEyep239g283;
Animation fallingPlatformCameraAnimation1g241; // top
Animation fallingPlatformCameraAnimation2g242; // one from bottom
Animation fallingPlatformCameraAnimation3g243; // bottom
Ceiling leftPillarCeilingg245; // idk why this is a group
Chain leftPillarTopChaing246g247;
Chain leftPillarMiddleChaing247g252;
Chain leftPillarLowerChainsg247g251;
Chain leftPillarUpperMiddleChaing247g299; // idk why this is a group either
Chain rightPillarTopChaing248g249;
Chain leftPillarMiddleChaing249g254;
Chain leftPillarLowerChainsg249g253;
Platform fallingPlatformg250; // everything on it too
Block fallingPlatformBlockg250g255; // physical part
Glow fallingPlatformButtonGlowg256;
Block coinBlock1g257g266g289; // for coins
Text coinBlock1Textg257g266; // ^
Block coinBlock2g260g269g289; // for blue coins
Text coinBlock2Textg260g269; // ^
Block coinBlock3g262g272g289; // for time
Text coinBlock3Textg262g272g303; // ^
LevelCoin levelCoin1g276; // for coins
LevelCoin levelCoin2g277; // for blue coins
LevelCoin levelCoin3g278; // for time
Auxiliary fallingPlatformCameraHelperp283; // idk what it does but ye
Smoke fallingPlatformSmokeg284; // under the platform before it falls
Particle fallingPlatformParticleg285; // ^
Background fallingPlatformBackgroundg286; // ^
Text towerTextg296;

// non event functions
// functions without a spawn call won't have a group id added
void setStartPosition() { // built in function
  player.setPosition(spawnWallg1.getPosition());
}

void setCameraBoundaries() {
  camera.setLeftBoundary(leftDownCameraBoundaryg3.getX());
  camera.setBottomBoundary(leftDownCameraBoundaryg3.getY());
}

void unkg2() {
  playSFX(unk);
}

void unkg4() {
  unk;
}

void unkg5() {
  unk;
}

void unkg7() {
  unk;
}

void unkg9() {
  playSFX(unk);
}

void unkg12() {
  unk;
}

void unkg13() {
  unk;
}

void unkg14() {
  unk;
}

void unkg15() {
  unk;
}

void unkg16() {
  unk;
}

void unkg17() {
  unk;
}

void unkg19() {
  unk;
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

void unkg25() {
  unk;
}

void unkg26() {
  unk;
}

void vineHandlingg28() {
  unk;
}

void unkg36() {
  playSFX(unk);
}

void unkg37() {
  playSFX(unk);
}

void unkg38() {
  playSFX(unk);
}

void startColorPulsesg41() {
  unk;
}

void unkg42() { // unused I believe
  unk;
}

void unkg45() {
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

void unkg56() {
  unk;
}

void unkg58() { // checkpoint animation
  unk;
}

void unkg67() {
  unk;
}

void unkg68() {
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

void unkg123() {
  unk;
}

void unkg125() {
  unk;
}

void startMovingBridgeHandlingg129() {
  unk;
}

void cameraHandlingBeforeMovingSpikesg130() {
  unk;
}

void unkg133() {
  unk;
}

void startMovingSawHandlingg136() {
  unk;
}

void unkg138() {
  unk;
}

void unkg142() {
  unk;
}

void unkg144() {
  unk;
}

void unkg145() {
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

void unkg184() {
  unk;
}

void startDoorSequenceg192() { // i could switch this to an event function, but I'd rather have it as the events trigger the spawns
  unk;
}

void unkg202() {
  unk;
}

void handleBatsg208() { // interacts with g209 ^_^
  unk;
}

void unkg213() {
  unk;
}

void unkg214() {
  unk;
}

void unkg215() {
  unk;
}

void unkg216() {
  unk;
}

void unkg217() {
  unk;
}

void unkg218() {
  unk;
}

void unkg220() {
  unk;
}

void startBlueCoin3Lightingg222() { // robtop is really sporadic with his ids, goofy lil fellow
  unk;
}

void unkg223() {
  unk;
}

void startBlueCoin1Lightingg224() { // the fog shall devour us all
  unk;
}

void unkg225() {
  unk;
}

void stopBlueCoin3Lightingg226() { // why is this neccessary? I have no idea. You do you robtop
  unk;
}

void unkg227() {
  unk;
}

void unkg230() {
  unk;
}

void unkg231() {
  unk;
}

void levelEndSequenceg235() { // the end of the level, but not the end of my suffering
  unk;
}

void unkg244() {
  unk;
}

void unkg258() {
  unk;
}

void unkg259() {
  unk;
}

void unkg261() {
  unk;
}

void unkg263() {
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

void unkg280() {
  unk;
}

void unkg281() {
  unk;
}

void unkg282() {
  unk;
}

void unkg287() {
  unk;
}

void unkg288() {
  unk;
}

void unkg290() {
  unk;
}

void unkg291() {
  unk;
}

void unkg293() {
  unk;
}

void unkg294() {
  unk;
}

void unkg295() {
  unk;
}

void startTowerTextHandlingg296() {
  unk;
}

void unkg297() {
  unk;
}


void unkg298() {
  unk;
}

void unkg300() {
  unk;
}

void unkg301() {
  unk;
}

void unkg302() {
  unk;
}

void unkg304() {
  unk;
}

void startEndWalkCamerag305() {
  unk;
}

void unkg306() {
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

void onLanding() { // all landings > tiny landing
  unkg2();
}

void onTouchCoin() {
  unkg4();
}

void onUnkg7() {
  playSFX(unk);
}

void onHitOrb() { // any orb
  unkg9();
}

void onUnkg26() {
  playSFX(unk);
}
