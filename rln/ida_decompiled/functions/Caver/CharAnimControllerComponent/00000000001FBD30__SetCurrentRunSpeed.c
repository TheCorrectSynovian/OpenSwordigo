/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBD30
 * Mangled: ._ZN5Caver27CharAnimControllerComponent18SetCurrentRunSpeedEf
 * Demangled: Caver::CharAnimControllerComponent::SetCurrentRunSpeed(float)
 *
 * Callers: 1
 *   0x000000000025B5D8  Caver::CharControllerComponent::RegisterLibrary(void)
 *
 * Callees: 1
 *   0x0000000000257448  Caver::CharAnimControllerComponent::SetCurrentRunSpeed(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBD38 string=0x00000000001FBD3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharAnimControllerComponent::SetCurrentRunSpeed(
        Caver::CharAnimControllerComponent *this,
        float a2)
{
  return _ZN5Caver27CharAnimControllerComponent18SetCurrentRunSpeedEf(this, a2);
}

