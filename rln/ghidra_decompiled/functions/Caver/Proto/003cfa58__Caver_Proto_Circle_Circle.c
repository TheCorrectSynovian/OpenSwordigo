/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cfa58
 * Function: Caver::Proto::Circle::Circle
 * Signature: undefined __thiscall Circle(Circle * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Circle::Circle() */

void __thiscall Caver::Proto::Circle::Circle(Circle *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e6be0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined **)this = puVar1 + 0x10;
  return;
}


