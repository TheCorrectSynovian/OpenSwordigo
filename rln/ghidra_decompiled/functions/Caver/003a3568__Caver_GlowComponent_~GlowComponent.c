/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a3568
 * Function: Caver::GlowComponent::~GlowComponent
 * Signature: undefined __thiscall ~GlowComponent(GlowComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GlowComponent::~GlowComponent() */

void __thiscall Caver::GlowComponent::~GlowComponent(GlowComponent *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3a356c);
  (*pcVar1)();
}


