/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003438ac
 * Function: Caver::Component::~Component
 * Signature: undefined __thiscall ~Component(Component * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Component::~Component() */

void __thiscall Caver::Component::~Component(Component *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3438b0);
  (*pcVar1)();
}


