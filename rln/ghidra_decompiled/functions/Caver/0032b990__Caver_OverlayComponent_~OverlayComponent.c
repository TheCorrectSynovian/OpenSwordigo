/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032b990
 * Function: Caver::OverlayComponent::~OverlayComponent
 * Signature: undefined __thiscall ~OverlayComponent(OverlayComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OverlayComponent::~OverlayComponent() */

void __thiscall Caver::OverlayComponent::~OverlayComponent(OverlayComponent *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x32b994);
  (*pcVar1)();
}


