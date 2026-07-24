/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e98f8
 * Function: lua_pcall
 * Signature: undefined __cdecl lua_pcall(lua_State * param_1, int param_2, int param_3, int param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_pcall(lua_State*, int, int, int) */

void lua_pcall(lua_State *param_1,int param_2,int param_3,int param_4)

{
  long lVar1;
  long lVar2;
  lua_State *plVar3;
  long lVar4;
  undefined8 uVar5;
  long local_48;
  int local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_4 == 0) {
    lVar4 = *(long *)(param_1 + 0x40);
    lVar2 = 0;
  }
  else {
    if (param_4 < 1) {
      if (param_4 < -9999) {
        if (param_4 == -0x2712) {
          plVar3 = param_1 + 0x78;
        }
        else if (param_4 == -0x2711) {
          uVar5 = *(undefined8 *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0x18);
          *(undefined4 *)(param_1 + 0x90) = 5;
          *(undefined8 *)(param_1 + 0x88) = uVar5;
          plVar3 = param_1 + 0x88;
        }
        else if (param_4 == -10000) {
          plVar3 = (lua_State *)(*(long *)(param_1 + 0x20) + 0xa0);
        }
        else {
          plVar3 = (lua_State *)&DAT_00699bc8;
          if ((int)(-0x2712 - (long)param_4) <=
              (int)(uint)*(byte *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0xb)) {
            plVar3 = (lua_State *)
                     (**(long **)(*(long *)(param_1 + 0x28) + 8) + (-0x2712 - (long)param_4) * 0x10
                     + 0x18);
          }
        }
      }
      else {
        plVar3 = (lua_State *)(*(long *)(param_1 + 0x10) + (long)param_4 * 0x10);
      }
    }
    else {
      plVar3 = (lua_State *)(*(long *)(param_1 + 0x18) + (long)param_4 * 0x10 + -0x10);
      if (*(lua_State **)(param_1 + 0x10) <= plVar3) {
        plVar3 = (lua_State *)&DAT_00699bc8;
      }
    }
    lVar4 = *(long *)(param_1 + 0x40);
    lVar2 = (long)plVar3 - lVar4;
  }
  local_48 = *(long *)(param_1 + 0x10) + (long)(param_2 + 1) * -0x10;
  local_40 = param_3;
  FUN_005ec9bc(param_1,FUN_005e9a78,&local_48,local_48 - lVar4,lVar2);
  if (param_3 == -1) {
    if (*(ulong *)(*(long *)(param_1 + 0x28) + 0x10) <= *(ulong *)(param_1 + 0x10)) {
      *(ulong *)(*(long *)(param_1 + 0x28) + 0x10) = *(ulong *)(param_1 + 0x10);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


