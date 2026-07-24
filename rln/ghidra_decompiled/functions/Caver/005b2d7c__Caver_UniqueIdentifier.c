/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b2d7c
 * Function: Caver::UniqueIdentifier
 * Signature: undefined __cdecl UniqueIdentifier(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::UniqueIdentifier() */

void Caver::UniqueIdentifier(void)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  uuid *extraout_x1;
  uuid *extraout_x1_00;
  uuid *extraout_x1_01;
  uuid *extraout_x1_02;
  uuid *puVar5;
  int iVar6;
  long lVar7;
  basic_random_generator<boost::random::mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>>
  abStack_98 [8];
  long *local_90;
  pass_through_engine apStack_88 [8];
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  ulong local_68;
  ulong uStack_60;
  undefined6 local_58;
  byte bStack_52;
  undefined1 uStack_51;
  byte local_50;
  undefined7 uStack_4f;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  boost::uuids::
  basic_random_generator<boost::random::mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>>
  ::basic_random_generator(abStack_98);
  uVar4 = boost::uniform_int<unsigned_long>::
          generate<boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>*>>>
                    (apStack_88,local_80,uStack_78,local_70);
  lVar7 = 0;
  iVar6 = 0;
  puVar5 = extraout_x1;
  do {
    if (iVar6 == 8) {
      uVar4 = boost::uniform_int<unsigned_long>::
              generate<boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>*>>>
                        (apStack_88,local_80,uStack_78,local_70);
      iVar6 = 0;
      puVar5 = extraout_x1_00;
    }
    *(char *)((long)&local_58 + lVar7) = (char)(uVar4 >> ((ulong)(uint)(iVar6 << 3) & 0x3f));
    lVar7 = lVar7 + 1;
    iVar6 = iVar6 + 1;
  } while (lVar7 != 0x10);
  bVar1 = local_50 & 0x3f | 0x80;
  bVar2 = bStack_52 & 0xf | 0x40;
  local_68 = CONCAT17(uStack_51,CONCAT16(bStack_52,local_58)) & 0xff0fffffffffffff |
             0x40000000000000;
  uStack_60 = CONCAT71(uStack_4f,local_50) & 0xffffffffffffff3f | 0x80;
  bStack_52 = bVar2;
  local_50 = bVar1;
  if ((local_90 != (long *)0x0) && (lVar7 = local_90[1], local_90[1] = lVar7 + -1, lVar7 + -1 == 0))
  {
    (**(code **)(*local_90 + 0x10))(local_90);
    lVar7 = local_90[2];
    local_90[2] = lVar7 + -1;
    puVar5 = extraout_x1_01;
    if (lVar7 + -1 == 0) {
      (**(code **)(*local_90 + 0x18))(local_90);
      puVar5 = extraout_x1_02;
    }
  }
  boost::uuids::to_string((uuids *)&local_68,puVar5);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


