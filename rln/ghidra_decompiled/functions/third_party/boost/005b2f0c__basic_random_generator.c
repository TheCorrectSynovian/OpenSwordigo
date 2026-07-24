/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b2f0c
 * Function: boost::uuids::basic_random_generator<boost::random::mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>>::basic_random_generator
 * Signature: undefined __thiscall basic_random_generator(basic_random_generator<boost::random::mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* boost::uuids::basic_random_generator<boost::random::mersenne_twister<unsigned int, 32, 624, 397,
   31, 2567483615u, 11, 7, 2636928640u, 15, 4022730752u, 18, 3346425566u>
   >::basic_random_generator() */

void __thiscall
boost::uuids::
basic_random_generator<boost::random::mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>>
::basic_random_generator
          (basic_random_generator<boost::random::mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>>
           *this)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  mersenne_twister *pmVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 *local_68;
  undefined4 local_60;
  undefined4 local_58 [5];
  undefined4 local_44;
  FILE *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pmVar4 = operator_new(0x1384);
  uVar2 = _UNK_00697368;
  uVar6 = _DAT_00697360;
  iVar3 = 4;
  iVar5 = 3;
  *(undefined4 *)(pmVar4 + 0x1380) = 4;
  *(undefined8 *)(pmVar4 + 8) = uVar2;
  *(undefined8 *)pmVar4 = uVar6;
  do {
    *(uint *)(pmVar4 + (long)iVar3 * 4) =
         iVar3 + (*(uint *)(pmVar4 + (long)iVar5 * 4) ^ *(uint *)(pmVar4 + (long)iVar5 * 4) >> 0x1e)
                 * 0x6c078965;
    iVar5 = *(int *)(pmVar4 + 0x1380);
    iVar3 = iVar5 + 1;
    *(int *)(pmVar4 + 0x1380) = iVar3;
  } while (iVar5 < 0x26f);
  *(mersenne_twister **)this = pmVar4;
  boost::detail::shared_count::
  shared_count<boost::random::mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>>
            ((shared_count *)(this + 8),pmVar4);
                    /* try { // try from 005b2f98 to 006b2fb7 has its CatchHandler @ 005b2f98
                       catch() { ... } // from try @ 005b2f98 with catch @ 005b2f98
                       catch() { ... } // from try @ 005b2fc0 with catch @ 005b2f98
                       catch() { ... } // from try @ 005b3008 with catch @ 005b2f98 */
  boost::detail::sp_enable_shared_from_this(this,pmVar4,pmVar4);
  uVar6 = *(undefined8 *)this;
                    /* try { // try from 005b2fb8 to 006b2fbf has its CatchHandler @ 005b2ff0 */
  *(undefined8 *)(this + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x28) = 0xffffffffffffffff;
                    /* try { // try from 005b2fc0 to 006b2ffb has its CatchHandler @ 005b2f98 */
  *(undefined8 *)(this + 0x10) = uVar6;
  *(undefined8 *)(this + 0x18) = 0;
  local_44 = 5;
  local_40 = fopen("/dev/urandom","rb");
  local_68 = local_58;
  detail::seed_rng::sha1_random_digest_((seed_rng *)local_58);
  local_44 = 1;
  local_60 = local_58[0];
                    /* catch() { ... } // from try @ 005b2fb8 with catch @ 005b2ff0 */
                    /* try { // try from 005b2ffc to 006b2fff has its CatchHandler @ 005b3000 */
                    /* catch() { ... } // from try @ 005b2ffc with catch @ 005b3000 */
  random::
  mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>
  ::seed<boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>>
            (uVar6,&local_68,0,0);
                    /* try { // try from 005b3004 to 006b3007 has its CatchHandler @ 005b3010 */
                    /* try { // try from 005b3008 to 006b3013 has its CatchHandler @ 005b2f98 */
  iVar3 = 0;
  if (local_40 != (FILE *)0x0) {
    iVar3 = fclose(local_40);
  }
                    /* catch() { ... } // from try @ 005b3004 with catch @ 005b3010 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005b3168 with catch @ 005b3014
                       catch(type#1 @ 00000000) { ... } // from try @ 005b33e4 with catch @ 005b3014
                        */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}


