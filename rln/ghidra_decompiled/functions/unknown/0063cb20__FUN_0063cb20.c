/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063cb20
 * Function: FUN_0063cb20
 * Signature: undefined FUN_0063cb20(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063cb20(undefined4 *param_1,undefined4 param_2)

{
  long lVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
                    /* catch() { ... } // from try @ 0063c5f0 with catch @ 0063cb20 */
                    /* catch() { ... } // from try @ 0063c024 with catch @ 0063cb24 */
  puVar3 = &DAT_007fcf70;
  *param_1 = param_2;
  puVar4 = &DAT_007fd0f0;
  lVar1 = 0;
  *(undefined8 *)(param_1 + 4) = 0x1c;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 **)(param_1 + 2) = &DAT_007fcf70;
  *(undefined8 **)(param_1 + 6) = &DAT_007fd0f0;
  while( true ) {
    *(undefined8 *)((long)puVar4 + lVar1) = 0;
    *(undefined8 *)((long)puVar3 + lVar1) = 0;
    lVar1 = lVar1 + 8;
    if (lVar1 == 0xe0) break;
    puVar3 = *(undefined8 **)(param_1 + 2);
    puVar4 = *(undefined8 **)(param_1 + 6);
  }
                    /* catch() { ... } // from try @ 0063c00c with catch @ 0063cb94 */
  *(undefined2 ***)(param_1 + 8) = &DAT_007fc390;
                    /* catch() { ... } // from try @ 0063bf98 with catch @ 0063cbac */
  DAT_007fc390 = &DAT_007fbf00;
  puVar2 = (undefined2 *)FUN_0063be7c();
  DAT_007fbf00 = *puVar2;
  DAT_007fc3a0 = 0;
  DAT_007fc398 = 0;
  *(undefined8 *)(*(long *)(param_1 + 8) + 0x18) = 0;
  *(undefined8 *)(*(long *)(param_1 + 8) + 0x20) = 0;
  *(undefined8 *)(*(long *)(param_1 + 8) + 0x28) = 0;
  FUN_006202a8(&DAT_007fc520,0,0,1);
                    /* catch() { ... } // from try @ 0063bf88 with catch @ 0063cc00 */
  FUN_0063c520(param_1,PTR_DAT_007e7e50,&DAT_007fc520);
                    /* catch() { ... } // from try @ 0063c6cc with catch @ 0063cc04 */
                    /* catch() { ... } // from try @ 0063c684 with catch @ 0063cc08 */
                    /* catch() { ... } // from try @ 0063c4ac with catch @ 0063cc0c */
  FUN_00670964(&DAT_007fc2c0,1);
  FUN_0063c520(param_1,PTR_DAT_007e7560,&DAT_007fc2c0);
                    /* try { // try from 0063cc30 to 0073cf0b has its CatchHandler @ 0063cf10 */
  DAT_007fd050 = PTR_DAT_007e6c88 + 0x10;
  DAT_007fbf70 = PTR_DAT_007e4908 + 0x10;
                    /* catch() { ... } // from try @ 0063c5c8 with catch @ 0063cc5c */
  DAT_007fd058 = 1;
  DAT_007fd060 = 0;
  DAT_007fd068 = 0;
  DAT_007fd070 = 0;
  DAT_007fd078 = 0;
  DAT_007fd080 = 0;
  DAT_007fd088 = 0;
  DAT_007fd090 = 0;
  DAT_007fd098 = 0;
  DAT_007fd099 = 0;
  DAT_007fd0d8 = 0;
  DAT_007fbf78 = 1;
  DAT_007fbf80 = &DAT_007fd050;
  FUN_0063efc4(&DAT_007fbf70,0);
                    /* catch() { ... } // from try @ 0063c2dc with catch @ 0063ccac */
  FUN_0063c520(param_1,PTR_DAT_007e6d18,&DAT_007fbf70);
                    /* catch() { ... } // from try @ 0063c550 with catch @ 0063ccb0 */
                    /* catch() { ... } // from try @ 0063c540 with catch @ 0063ccb4 */
                    /* catch() { ... } // from try @ 0063c440 with catch @ 0063ccb8 */
                    /* catch() { ... } // from try @ 0063c418 with catch @ 0063ccd0 */
  DAT_007fd200 = PTR_DAT_007e4ad0 + 0x10;
  DAT_007fd208 = 1;
                    /* catch() { ... } // from try @ 0063c584 with catch @ 0063cce0 */
  FUN_0063c520(param_1,PTR_DAT_007e5c60,&DAT_007fd200);
  DAT_007fc890 = PTR_DAT_007e5618 + 0x10;
  DAT_007fc898 = 1;
  FUN_0063c520(param_1,PTR_DAT_007e6020,&DAT_007fc890);
  DAT_007fbe68 = 1;
  DAT_007fbe60 = PTR_DAT_007e5d48 + 0x10;
  DAT_007fbe70 = FUN_0063be10();
                    /* catch() { ... } // from try @ 0063c0ac with catch @ 0063cd44
                       catch() { ... } // from try @ 0063c408 with catch @ 0063cd44 */
                    /* catch() { ... } // from try @ 0063c458 with catch @ 0063cd48
                       catch() { ... } // from try @ 0063c4fc with catch @ 0063cd48 */
  FUN_0063c520(param_1,PTR_DAT_007e7068,&DAT_007fbe60);
  DAT_007fbe80 = PTR_DAT_007e4c60 + 0x10;
  DAT_007fc820 = PTR_DAT_007e55e8 + 0x10;
  DAT_007fbe88 = 1;
  DAT_007fbe90 = 0;
                    /* catch() { ... } // from try @ 0063c064 with catch @ 0063cd98
                       catch() { ... } // from try @ 0063c434 with catch @ 0063cd98
                       catch() { ... } // from try @ 0063c448 with catch @ 0063cd98 */
  DAT_007fbe98 = 0;
  DAT_007fbea0 = 0;
  DAT_007fbea1 = 0;
  DAT_007fbea2 = 0;
  DAT_007fbea8 = 0;
  DAT_007fbeb0 = 0;
  DAT_007fbeb8 = 0;
  DAT_007fbec0 = 0;
  DAT_007fbec8 = 0;
  DAT_007fbed0 = 0;
  DAT_007fbed8 = 0;
  DAT_007fbedc = 0;
  DAT_007fbedd = 0;
  DAT_007fbede = 0;
  DAT_007fbedf = 0;
  DAT_007fbee0 = 0;
  DAT_007fbee1 = 0;
  DAT_007fbee2 = 0;
  DAT_007fbee3 = 0;
  DAT_007fbeef = 0;
                    /* catch() { ... } // from try @ 0063c2b4 with catch @ 0063cde8 */
  DAT_007fc828 = 1;
  DAT_007fc830 = &DAT_007fbe80;
  FUN_0063e890(&DAT_007fc820,0,0);
  FUN_0063c520(param_1,PTR_DAT_007e51d0,&DAT_007fc820);
                    /* catch() { ... } // from try @ 0063c238 with catch @ 0063ce38 */
  DAT_007fcec0 = PTR_DAT_007e7cb8 + 0x10;
  DAT_007fc7e0 = PTR_DAT_007e76b8 + 0x10;
  DAT_007fcec8 = 1;
  DAT_007fced0 = 0;
                    /* catch() { ... } // from try @ 0063c21c with catch @ 0063ce50 */
  DAT_007fced8 = 0;
                    /* catch() { ... } // from try @ 0063c200 with catch @ 0063ce54 */
  DAT_007fcee0 = 0;
  DAT_007fcee1 = 0;
  DAT_007fcee2 = 0;
  DAT_007fcee8 = 0;
                    /* catch() { ... } // from try @ 0063c3f4 with catch @ 0063ce64
                       catch() { ... } // from try @ 0063c730 with catch @ 0063ce64 */
  DAT_007fcef0 = 0;
                    /* catch() { ... } // from try @ 0063c22c with catch @ 0063ce68
                       catch() { ... } // from try @ 0063c240 with catch @ 0063ce68
                       catch() { ... } // from try @ 0063c760 with catch @ 0063ce68 */
  DAT_007fcef8 = 0;
  DAT_007fcf00 = 0;
  DAT_007fcf08 = 0;
  DAT_007fcf10 = 0;
                    /* catch() { ... } // from try @ 0063c288 with catch @ 0063ce78
                       catch() { ... } // from try @ 0063c344 with catch @ 0063ce78 */
  DAT_007fcf18 = 0;
  DAT_007fcf1c = 0;
  DAT_007fcf1d = 0;
  DAT_007fcf1e = 0;
  DAT_007fcf1f = 0;
  DAT_007fcf20 = 0;
  DAT_007fcf21 = 0;
  DAT_007fcf22 = 0;
  DAT_007fcf23 = 0;
  DAT_007fcf2f = 0;
  DAT_007fc7e8 = 1;
  DAT_007fc7f0 = &DAT_007fcec0;
  FUN_0063e704(&DAT_007fc7e0,0,0);
  FUN_0063c520(param_1,PTR_DAT_007e7460,&DAT_007fc7e0);
  DAT_007fc790 = PTR_DAT_007e4f40 + 0x10;
  DAT_007fc798 = 1;
  FUN_0063c520(param_1,PTR_DAT_007e7e38,&DAT_007fc790);
                    /* try { // try from 0063cf0c to 0073d057 has its CatchHandler @ 0063bacc */
                    /* catch() { ... } // from try @ 0063c9dc with catch @ 0063cf10
                       catch() { ... } // from try @ 0063cc30 with catch @ 0063cf10 */
                    /* catch() { ... } // from try @ 0063c1f4 with catch @ 0063cf14
                       catch() { ... } // from try @ 0063c208 with catch @ 0063cf14
                       catch() { ... } // from try @ 0063c7a8 with catch @ 0063cf14 */
  DAT_007fbf90 = PTR_DAT_007e5e28 + 0x10;
  DAT_007fbf98 = 1;
  FUN_0063c520(param_1,PTR_DAT_007e5ef8,&DAT_007fbf90);
  DAT_007fc140 = 0;
  DAT_007fc138 = 1;
  DAT_007fc130 = PTR_DAT_007e5e70 + 0x10;
  DAT_007fc148 = 0;
  DAT_007fc150 = 0;
  DAT_007fc158 = 0;
  DAT_007fc160 = 0;
  DAT_007fc168 = 0;
  DAT_007fc170 = 0;
  DAT_007fc178 = 0;
  DAT_007fc180 = 0;
  DAT_007fc188 = 0;
  DAT_007fc190 = 0;
  DAT_007fc198 = 0;
  DAT_007fc1a0 = 0;
  DAT_007fc1a8 = 0;
  DAT_007fc1b0 = 0;
  DAT_007fc1b8 = 0;
  DAT_007fc1c0 = 0;
  DAT_007fc1c8 = 0;
  DAT_007fc1d0 = 0;
  DAT_007fc1d8 = 0;
  DAT_007fc1e0 = 0;
  DAT_007fc1e8 = 0;
  DAT_007fc1f0 = 0;
  DAT_007fc1f8 = 0;
  DAT_007fc200 = 0;
  DAT_007fc208 = 0;
  DAT_007fc210 = 0;
  DAT_007fc218 = 0;
  DAT_007fc220 = 0;
  DAT_007fc228 = 0;
  DAT_007fc230 = 0;
  DAT_007fc238 = 0;
  DAT_007fc240 = 0;
  DAT_007fc248 = 0;
  DAT_007fc250 = 0;
  DAT_007fc258 = 0;
  DAT_007fc260 = 0;
  DAT_007fc268 = 0;
  DAT_007fc270 = 0;
  DAT_007fc278 = 0;
  DAT_007fc280 = 0;
  DAT_007fc288 = 0;
  DAT_007fc290 = 0;
  DAT_007fc298 = 0;
  DAT_007fc2a0 = 0;
  DAT_007fc2a8 = 0;
  DAT_007fc2b0 = 0;
  DAT_007fc2b8 = 0;
  FUN_0062c8fc(&DAT_007fd1d0,&DAT_007fc130,1);
  FUN_0063c520(param_1,PTR_DAT_007e7908,&DAT_007fd1d0);
                    /* try { // try from 0063d058 to 0073d107 has its CatchHandler @ 0063d058
                       catch() { ... } // from try @ 0063d058 with catch @ 0063d058
                       catch() { ... } // from try @ 0063d1c8 with catch @ 0063d058
                       catch() { ... } // from try @ 0063d27c with catch @ 0063d058 */
  DAT_007fcf30 = PTR_DAT_007e5c98 + 0x10;
  DAT_007fcf38 = 1;
  FUN_0063c520(param_1,PTR_DAT_007e6cf0,&DAT_007fcf30);
  DAT_007fc7d0 = PTR_DAT_007e7f78 + 0x10;
  DAT_007fc7d8 = 1;
  FUN_0063c520(param_1,PTR_DAT_007e7548,&DAT_007fc7d0);
  FUN_0062ce9c(&DAT_007fbf50,1);
  FUN_0063c520(param_1,PTR_DAT_007e6a20,&DAT_007fbf50);
  FUN_00620050(&DAT_007fc8a0,1);
  FUN_0063c520(param_1,PTR_DAT_007e6da0,&DAT_007fc8a0);
  FUN_00670a0c(&DAT_007fcea0,1);
                    /* try { // try from 0063d108 to 0073d137 has its CatchHandler @ 0063d234 */
  FUN_0063c520(param_1,PTR_DAT_007e6e20,&DAT_007fcea0);
  DAT_007fc3d0 = PTR_DAT_007e7f30 + 0x10;
  DAT_007fbf30 = PTR_DAT_007e5640 + 0x10;
  DAT_007fc3d8 = 1;
  DAT_007fc3e0 = 0;
  DAT_007fc3e8 = 0;
  DAT_007fc3f0 = 0;
  DAT_007fc3f8 = 0;
  DAT_007fc400 = 0;
  DAT_007fc408 = 0;
  DAT_007fc410 = 0;
  DAT_007fc418 = 0;
  DAT_007fc41c = 0;
  DAT_007fc518 = 0;
  DAT_007fbf38 = 1;
  DAT_007fbf40 = &DAT_007fc3d0;
  FUN_0063f19c(&DAT_007fbf30,0);
  FUN_0063c520(param_1,PTR_DAT_007e7588,&DAT_007fbf30);
                    /* try { // try from 0063d198 to 0073d1c7 has its CatchHandler @ 0063d228 */
  DAT_007fc7a0 = PTR_DAT_007e7f50 + 0x10;
  DAT_007fc7a8 = 1;
  FUN_0063c520(param_1,PTR_DAT_007e5c58,&DAT_007fc7a0);
                    /* try { // try from 0063d1c8 to 0073d253 has its CatchHandler @ 0063d058 */
  DAT_007fc7b0 = PTR_DAT_007e51b0 + 0x10;
  DAT_007fc7b8 = 1;
  FUN_0063c520(param_1,PTR_DAT_007e70c0,&DAT_007fc7b0);
  DAT_007fc808 = 1;
  DAT_007fc800 = PTR_DAT_007e68f0 + 0x10;
  DAT_007fc810 = FUN_0063be10();
                    /* catch() { ... } // from try @ 0063d198 with catch @ 0063d228 */
                    /* catch() { ... } // from try @ 0063d108 with catch @ 0063d234 */
  FUN_0063c520(param_1,PTR_DAT_007e5090,&DAT_007fc800);
                    /* try { // try from 0063d254 to 0073d27b has its CatchHandler @ 0063d284 */
  DAT_007fc2f0 = PTR_DAT_007e4ab8 + 0x10;
  DAT_007fbf10 = PTR_DAT_007e4d98 + 0x10;
  DAT_007fc2f8 = 1;
  DAT_007fc300 = 0;
                    /* try { // try from 0063d27c to 0073d287 has its CatchHandler @ 0063d058 */
  DAT_007fc308 = 0;
  DAT_007fc310 = 0;
                    /* catch() { ... } // from try @ 0063d254 with catch @ 0063d284 */
  DAT_007fc314 = 0;
  DAT_007fc318 = 0;
  DAT_007fc320 = 0;
  DAT_007fc328 = 0;
  DAT_007fc330 = 0;
  DAT_007fc338 = 0;
  DAT_007fc340 = 0;
  DAT_007fc348 = 0;
  DAT_007fc350 = 0;
  DAT_007fc354 = 0;
  DAT_007fc355 = 0;
  DAT_007fc356 = 0;
  DAT_007fc357 = 0;
  DAT_007fc358 = 0;
  DAT_007fc359 = 0;
  DAT_007fc35a = 0;
  DAT_007fc35b = 0;
  DAT_007fc388 = 0;
  DAT_007fbf18 = 1;
  DAT_007fbf20 = &DAT_007fc2f0;
  FUN_0063ecf0(&DAT_007fbf10,0,0);
  FUN_0063c520(param_1,PTR_DAT_007e66f8,&DAT_007fbf10);
  DAT_007fcdf0 = PTR_DAT_007e57f8 + 0x10;
  DAT_007fc870 = PTR_DAT_007e6228 + 0x10;
  DAT_007fcdf8 = 1;
  DAT_007fce00 = 0;
  DAT_007fce08 = 0;
  DAT_007fce10 = 0;
  DAT_007fce14 = 0;
  DAT_007fce18 = 0;
  DAT_007fce20 = 0;
  DAT_007fce28 = 0;
  DAT_007fce30 = 0;
  DAT_007fce38 = 0;
  DAT_007fce40 = 0;
  DAT_007fce48 = 0;
  DAT_007fce50 = 0;
  DAT_007fce54 = 0;
  DAT_007fce55 = 0;
  DAT_007fce56 = 0;
  DAT_007fce57 = 0;
  DAT_007fce58 = 0;
  DAT_007fce59 = 0;
  DAT_007fce5a = 0;
  DAT_007fce5b = 0;
  DAT_007fce88 = 0;
  DAT_007fc878 = 1;
  DAT_007fc880 = &DAT_007fcdf0;
  FUN_0063eb8c(&DAT_007fc870,0,0);
  FUN_0063c520(param_1,PTR_DAT_007e56e0,&DAT_007fc870);
  DAT_007fbef0 = PTR_DAT_007e74b0 + 0x10;
  DAT_007fbef8 = 1;
  FUN_0063c520(param_1,PTR_DAT_007e77b8,&DAT_007fbef0);
  DAT_007fce90 = PTR_DAT_007e6a78 + 0x10;
  DAT_007fce98 = 1;
  FUN_0063c520(param_1,PTR_DAT_007e7eb0,&DAT_007fce90);
  DAT_007fbfb0 = 0;
  DAT_007fbfa8 = 1;
  DAT_007fbfa0 = PTR_DAT_007e4bd8 + 0x10;
  DAT_007fbfb8 = 0;
  DAT_007fbfc0 = 0;
  DAT_007fbfc8 = 0;
  DAT_007fbfd0 = 0;
  DAT_007fbfd8 = 0;
  DAT_007fbfe0 = 0;
  DAT_007fbfe8 = 0;
  DAT_007fbff0 = 0;
  DAT_007fbff8 = 0;
  DAT_007fc000 = 0;
  DAT_007fc008 = 0;
  DAT_007fc010 = 0;
  DAT_007fc018 = 0;
  DAT_007fc020 = 0;
  DAT_007fc028 = 0;
  DAT_007fc030 = 0;
  DAT_007fc038 = 0;
  DAT_007fc040 = 0;
  DAT_007fc048 = 0;
  DAT_007fc050 = 0;
  DAT_007fc058 = 0;
  DAT_007fc060 = 0;
  DAT_007fc068 = 0;
  DAT_007fc070 = 0;
  DAT_007fc078 = 0;
  DAT_007fc080 = 0;
                    /* catch() { ... } // from try @ 0063d784 with catch @ 0063d4b0
                       catch() { ... } // from try @ 0063dbb4 with catch @ 0063d4b0
                       catch() { ... } // from try @ 0063dfc0 with catch @ 0063d4b0 */
  DAT_007fc088 = 0;
  DAT_007fc090 = 0;
  DAT_007fc098 = 0;
  DAT_007fc0a0 = 0;
  DAT_007fc0a8 = 0;
  DAT_007fc0b0 = 0;
  DAT_007fc0b8 = 0;
  DAT_007fc0c0 = 0;
  DAT_007fc0c8 = 0;
  DAT_007fc0d0 = 0;
  DAT_007fc0d8 = 0;
  DAT_007fc0e0 = 0;
  DAT_007fc0e8 = 0;
  DAT_007fc0f0 = 0;
  DAT_007fc0f8 = 0;
  DAT_007fc100 = 0;
  DAT_007fc108 = 0;
  DAT_007fc110 = 0;
  DAT_007fc118 = 0;
  DAT_007fc120 = 0;
  DAT_007fc128 = 0;
  FUN_0064ec54(&DAT_007fc760,&DAT_007fbfa0,1);
                    /* try { // try from 0063d508 to 0073d513 has its CatchHandler @ 0063dd08 */
                    /* try { // try from 0063d514 to 0073d51b has its CatchHandler @ 0063dcec */
  FUN_0063c520(param_1,PTR_DAT_007e6ef0,&DAT_007fc760);
                    /* try { // try from 0063d528 to 0073d52f has its CatchHandler @ 0063dd08 */
  DAT_007fc3c0 = PTR_DAT_007e7fb8 + 0x10;
  DAT_007fc3c8 = 1;
  FUN_0063c520(param_1,PTR_DAT_007e7eb8,&DAT_007fc3c0);
                    /* try { // try from 0063d56c to 0073d587 has its CatchHandler @ 0063dd14 */
  DAT_007fd0e0 = PTR_DAT_007e4b80 + 0x10;
  DAT_007fd0e8 = 1;
  FUN_0063c520(param_1,PTR_DAT_007e79e8,&DAT_007fd0e0);
  FUN_0064f1f4(&DAT_007fcdd0,1);
  FUN_0063c520(param_1,PTR_DAT_007e4d50,&DAT_007fcdd0);
  lVar5 = *(long *)(param_1 + 6);
                    /* try { // try from 0063d5c8 to 0073d5ef has its CatchHandler @ 0063dc9c */
  lVar1 = FUN_0063c4d0(PTR_DAT_007e6d18);
  *(undefined ***)(lVar5 + lVar1 * 8) = &DAT_007fd050;
  lVar5 = *(long *)(param_1 + 6);
  lVar1 = FUN_0063c4d0(PTR_DAT_007e51d0);
  *(undefined ***)(lVar5 + lVar1 * 8) = &DAT_007fbe80;
  lVar5 = *(long *)(param_1 + 6);
  lVar1 = FUN_0063c4d0(PTR_DAT_007e7460);
  *(undefined ***)(lVar5 + lVar1 * 8) = &DAT_007fcec0;
  lVar5 = *(long *)(param_1 + 6);
                    /* try { // try from 0063d610 to 0073d637 has its CatchHandler @ 0063dd14 */
  lVar1 = FUN_0063c4d0(PTR_DAT_007e7908);
  *(undefined ***)(lVar5 + lVar1 * 8) = &DAT_007fc130;
  lVar5 = *(long *)(param_1 + 6);
  lVar1 = FUN_0063c4d0(PTR_DAT_007e7588);
  *(undefined ***)(lVar5 + lVar1 * 8) = &DAT_007fc3d0;
  lVar5 = *(long *)(param_1 + 6);
  lVar1 = FUN_0063c4d0(PTR_DAT_007e66f8);
                    /* try { // try from 0063d63c to 0073d647 has its CatchHandler @ 0063dd00 */
  *(undefined ***)(lVar5 + lVar1 * 8) = &DAT_007fc2f0;
  lVar5 = *(long *)(param_1 + 6);
  lVar1 = FUN_0063c4d0(PTR_DAT_007e56e0);
  *(undefined ***)(lVar5 + lVar1 * 8) = &DAT_007fcdf0;
  lVar5 = *(long *)(param_1 + 6);
  lVar1 = FUN_0063c4d0(PTR_DAT_007e6ef0);
  *(undefined ***)(lVar5 + lVar1 * 8) = &DAT_007fbfa0;
  return;
}


