/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0030d720
 * Function: _INIT_330
 * Signature: undefined _INIT_330(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void _INIT_330(void)

{
  long lVar1;
  undefined *puVar2;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00622294(&DAT_007e9fb8);
  __cxa_atexit(PTR_FUN_007e6580,&DAT_007e9fb8,&PTR_LOOP_007e8000);
  puVar2 = PTR_imageTypeStrings_007e7180;
  FUN_00666bb8(PTR_imageTypeStrings_007e7180,"unknown",auStack_50);
  FUN_00666bb8(puVar2 + 8,&DAT_00697e1c,auStack_58);
  FUN_00666bb8(puVar2 + 0x10,&DAT_00697e20,auStack_60);
  FUN_00666bb8(puVar2 + 0x18,&DAT_00697e24,auStack_68);
  __cxa_atexit(FUN_0030d22c,0,&PTR_LOOP_007e8000);
  puVar2 = PTR_pixelFormatStrings_007e7170;
  FUN_00666bb8(PTR_pixelFormatStrings_007e7170,&DAT_00683aec,auStack_50);
  FUN_00666bb8(puVar2 + 8,"RGBA 8888",auStack_58);
  FUN_00666bb8(puVar2 + 0x10,"RGBA 4444",auStack_60);
  FUN_00666bb8(puVar2 + 0x18,"RGBA 5551",auStack_68);
  FUN_00666bb8(puVar2 + 0x20,"RGB 888",auStack_70);
  FUN_00666bb8(puVar2 + 0x28,"RGB 565",auStack_78);
  FUN_00666bb8(puVar2 + 0x30,"Luminance 8",auStack_80);
  FUN_00666bb8(puVar2 + 0x38,"Alpha 8",auStack_88);
  FUN_00666bb8(puVar2 + 0x40,"LuminanceAlpha 88",auStack_90);
  __cxa_atexit(FUN_0030d3d4,0,&PTR_LOOP_007e8000);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


