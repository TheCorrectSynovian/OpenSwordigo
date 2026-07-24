/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005890a8
 * Function: Caver::LoadContentsOfFile
 * Signature: undefined __cdecl LoadContentsOfFile(string * param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00589120 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* Caver::LoadContentsOfFile(std::string const&, std::string*) */

bool Caver::LoadContentsOfFile(string *param_1,string *param_2)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long local_250 [2];
  undefined1 auStack_240 [104];
  undefined1 auStack_1d8 [112];
  undefined8 auStack_168 [3];
  undefined1 auStack_150 [264];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00660604(local_250,*(undefined8 *)param_1,8);
  uVar4 = FUN_0061f654(auStack_1d8);
  bVar1 = (uVar4 & 1) != 0;
  if (bVar1) {
    lVar5 = *(long *)param_2;
    std::string::_M_replace_dispatch<std::istreambuf_iterator<char,std::char_traits<char>>>
              (uVar4,lVar5,lVar5 + *(long *)(lVar5 + -0x18),
               *(undefined8 *)((long)auStack_168 + *(long *)(local_250[0] + -0x18)),0xffffffff,0,
               0xffffffff);
  }
  puVar3 = PTR_PTR_007e5bc8;
  local_250[0] = *(long *)PTR_PTR_007e5bc8;
  *(undefined8 *)((long)local_250 + *(long *)(local_250[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007e5bc8 + 0x18);
  FUN_0065f52c(auStack_240);
  local_250[0] = *(long *)(puVar3 + 8);
  *(undefined8 *)((long)local_250 + *(long *)(local_250[0] + -0x18)) =
       *(undefined8 *)(puVar3 + 0x10);
  local_250[1] = 0;
  FUN_006221dc(auStack_150);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar1;
}


