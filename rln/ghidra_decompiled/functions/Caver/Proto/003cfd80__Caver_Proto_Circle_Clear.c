/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cfd80
 * Function: Caver::Proto::Circle::Clear
 * Signature: undefined __thiscall Clear(Circle * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Circle::Clear() */

void __thiscall Caver::Proto::Circle::Clear(Circle *this)

{
  long lVar1;
  
  if (this[0x1c] != (Circle)0x0) {
    if ((((byte)this[0x1c] & 1) != 0) && (lVar1 = *(long *)(this + 0x10), lVar1 != 0)) {
      if (*(char *)(lVar1 + 0x14) != '\0') {
        *(undefined4 *)(lVar1 + 0xc) = 0;
        *(undefined4 *)(lVar1 + 0x10) = 0;
      }
      *(undefined4 *)(lVar1 + 0x14) = 0;
    }
    *(undefined4 *)(this + 0x18) = 0;
  }
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}


