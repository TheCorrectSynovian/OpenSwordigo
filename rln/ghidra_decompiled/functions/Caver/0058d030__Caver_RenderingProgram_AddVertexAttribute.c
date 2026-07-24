/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058d030
 * Function: Caver::RenderingProgram::AddVertexAttribute
 * Signature: undefined __cdecl AddVertexAttribute(uint param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingProgram::AddVertexAttribute(unsigned int, std::string const&) */

void Caver::RenderingProgram::AddVertexAttribute(uint param_1,string *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined4 local_2c;
  long local_28;
  
  uVar3 = (ulong)param_1;
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0058cfd4 with catch @ 0058d054
                        */
  local_2c = SUB84(param_2,0);
  puVar1 = *(undefined4 **)(uVar3 + 0x28);
  if (puVar1 == *(undefined4 **)(uVar3 + 0x30)) {
                    /* try { // try from 0058d078 to 0068d09f has its CatchHandler @ 0058d0a8 */
    std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_insert_aux
              ((vector<unsigned_int,std::allocator<unsigned_int>> *)(uVar3 + 0x20),puVar1,&local_2c)
    ;
  }
  else {
    *puVar1 = local_2c;
    *(undefined4 **)(uVar3 + 0x28) = puVar1 + 1;
  }
  *(int *)(uVar3 + 0x18) = *(int *)(uVar3 + 0x18) + 1;
  if (*(long *)(lVar2 + 0x28) == local_28) {
                    /* try { // try from 0058d0a0 to 0068d0ab has its CatchHandler @ 0058cf88 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0058d078 with catch @ 0058d0a8
                        */
  __stack_chk_fail();
}


