/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c0c6c
 * Function: Caver::Program::LoadIntoState
 * Signature: undefined __thiscall LoadIntoState(Program * this, lua_State * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Program::LoadIntoState(lua_State*) const */

void __thiscall Caver::Program::LoadIntoState(Program *this,lua_State *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  int *piVar7;
  long local_38;
  undefined1 auStack_30 [8];
  long local_28;
  
                    /* catch() { ... } // from try @ 005c0bd8 with catch @ 005c0c70 */
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  if (*(undefined8 **)(this + 0x18) != (undefined8 *)0x0) {
    pcVar6 = (char *)**(undefined8 **)(this + 0x18);
    iVar4 = luaL_loadbuffer(param_1,pcVar6,*(ulong *)(pcVar6 + -0x18),"program");
    if (iVar4 == 0) {
      uVar5 = 1;
      goto LAB_005c0cf4;
    }
    uVar5 = lua_tolstring(param_1,1,(ulong *)0x0);
    FUN_00666bb8(&local_38,uVar5,auStack_30);
                    /* try { // try from 005c0ce0 to 006c0d27 has its CatchHandler @ 005c0ce0
                       catch(type#1 @ 00000000) { ... } // from try @ 005c0ce0 with catch @ 005c0ce0
                       catch(type#1 @ 00000000) { ... } // from try @ 005c0d74 with catch @ 005c0ce0
                       catch(type#1 @ 00000000) { ... } // from try @ 005c0dcc with catch @ 005c0ce0
                        */
    if ((undefined *)(local_38 + -0x18) != PTR_DAT_007e5de8) {
      piVar7 = (int *)(local_38 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar4 = *piVar7;
        *piVar7 = iVar4 + -1;
      }
      else {
        do {
          iVar4 = *piVar7;
                    /* try { // try from 005c0d28 to 006c0d73 has its CatchHandler @ 005c0dc0 */
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar2) {
            *piVar7 = iVar4 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar4 < 1) {
        operator_delete((undefined *)(local_38 + -0x18));
      }
    }
  }
  uVar5 = 0;
LAB_005c0cf4:
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


