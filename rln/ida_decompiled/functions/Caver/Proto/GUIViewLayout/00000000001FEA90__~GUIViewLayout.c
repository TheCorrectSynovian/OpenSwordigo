/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEA90
 * Mangled: ._ZN5Caver5Proto13GUIViewLayoutD2Ev
 * Demangled: Caver::Proto::GUIViewLayout::~GUIViewLayout()
 *
 * Callers: 1
 *   0x00000000002D6D58  Caver::Proto::GUIViewLayout::~GUIViewLayout()
 *
 * Callees: 1
 *   0x00000000002D6774  Caver::Proto::GUIViewLayout::GUIViewLayout(Caver::Proto::GUIViewLayout const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEA98 string=0x00000000001FEA9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::GUIViewLayout::~GUIViewLayout(Caver::Proto::GUIViewLayout *this)
{
  JUMPOUT(0x2D6A94);
}

