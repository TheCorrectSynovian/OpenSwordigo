/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BA1F4
 * Mangled: _ZN5Caver16GUITextFieldImpl10TouchEndedERKNS_7FWTouchE
 * Demangled: Caver::GUITextFieldImpl::TouchEnded(Caver::FWTouch const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FFC90  Caver::StartTextInputWithDelegate(Caver::ITextInputDelegate *,std::string const&)
 *
 * Referenced strings: 4
 *   insn=0x00000000004BA1F8 string=0x00000000004BA1FC ""
 *   insn=0x00000000004BA1FC string=0x00000000004BA200 ") "
 *   insn=0x00000000004BA200 string=0x00000000004BA204 ""
 *   insn=0x00000000004BA208 string=0x00000000004BA20C "\t0"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUITextFieldImpl::TouchEnded(__int64 this, const Caver::FWTouch *a2)
{
  if ( *((int *)a2 + 8) >= 1 )
  {
    *(_WORD *)(this + 408) = 257;
    *(_DWORD *)(this + 412) = 0;
    return Caver::StartTextInputWithDelegate();
  }
  return this;
}

