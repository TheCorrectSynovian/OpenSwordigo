/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b8cd0
 * Function: boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>*>>::operator()
 * Signature: undefined __thiscall operator()(pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>*>> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<unsigned
   int, 32, 624, 397, 31, 2567483615u, 11, 7, 2636928640u, 15, 4022730752u, 18, 3346425566u>*>
   >::TEMPNAMEPLACEHOLDERVALUE() */

uint __thiscall
boost::random::detail::
pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>*>>
::operator()(pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>*>>
             *this)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  long lVar6;
  
                    /* try { // try from 005b8cd0 to 006b8cd7 has its CatchHandler @ 005b8fc8 */
  puVar4 = *(uint **)this;
  uVar5 = puVar4[0x4e0];
                    /* try { // try from 005b8cd8 to 006b8cfb has its CatchHandler @ 005b8be8 */
  if (uVar5 == 0x270) {
    uVar5 = *puVar4;
    lVar6 = 0;
    do {
      uVar3 = uVar5 & 0x80000000;
      uVar5 = *(uint *)((long)puVar4 + lVar6 + 4);
                    /* try { // try from 005b8cfc to 006b8d03 has its CatchHandler @ 005b8f48 */
      lVar1 = lVar6 + 4;
                    /* try { // try from 005b8d04 to 006b8d4b has its CatchHandler @ 005b8be8 */
      *(uint *)((long)puVar4 + lVar6 + 0x9c0) =
           *(uint *)((long)puVar4 + lVar6 + 0x634) ^ (uVar5 & 0x7ffffffe | uVar3) >> 1 ^
           -(uVar5 & 1) & 0x9908b0df;
      lVar6 = lVar1;
    } while (lVar1 != 0x9c0);
    uVar5 = puVar4[0x4e0];
  }
  else if (0x4df < (int)uVar5) {
    uVar5 = puVar4[0x270];
    lVar6 = 0;
    do {
      puVar2 = (uint *)((long)puVar4 + lVar6);
                    /* try { // try from 005b8d4c to 006b8d5b has its CatchHandler @ 005b8f10 */
      uVar3 = uVar5 & 0x80000000;
      uVar5 = puVar2[0x271];
      lVar6 = lVar6 + 4;
                    /* try { // try from 005b8d5c to 006b9077 has its CatchHandler @ 005b8be8 */
      *puVar2 = puVar2[0x3fd] ^ (uVar5 & 0x7ffffffe | uVar3) >> 1 ^ -(uVar5 & 1) & 0x9908b0df;
    } while (lVar6 != 0x38c);
    uVar5 = puVar4[0x353];
    lVar6 = 0;
    do {
      puVar2 = (uint *)((long)puVar4 + lVar6);
      uVar3 = uVar5 & 0x80000000;
      uVar5 = puVar2[0x354];
      lVar6 = lVar6 + 4;
      puVar2[0xe3] = *puVar2 ^ (uVar5 & 0x7ffffffe | uVar3) >> 1 ^ -(uVar5 & 1) & 0x9908b0df;
    } while (lVar6 != 0x630);
    uVar5 = 0;
    puVar4[0x26f] =
         puVar4[0x18c] ^ (*puVar4 & 0x7ffffffe | puVar4[0x4df] & 0x80000000) >> 1 ^
         -(*puVar4 & 1) & 0x9908b0df;
    puVar4[0x4e0] = 0;
  }
  uVar3 = puVar4[(int)uVar5] ^ puVar4[(int)uVar5] >> 0xb;
  uVar3 = (uVar3 & 0x13a58ad) << 7 ^ uVar3;
  uVar3 = (uVar3 & 0x1df8c) << 0xf ^ uVar3;
  puVar4[0x4e0] = uVar5 + 1;
  return uVar3 ^ uVar3 >> 0x12;
}


