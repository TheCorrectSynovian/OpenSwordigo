/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BA09C
 * Mangled: _ZN5Caver16GUITextFieldImpl18TextInputDidFinishEv
 * Demangled: Caver::GUITextFieldImpl::TextInputDidFinish(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x00000000004BA0A8 string=0x00000000004BA0AC "`"
 *   insn=0x00000000004BA0B0 string=0x00000000004BA0B4 ""
 *   insn=0x00000000004BA0B0 string=0x00000000004BA0C8 "h"
 *   insn=0x00000000004BA0B8 string=0x00000000004BA0BC ""
 *   insn=0x00000000004BA0D8 string=0x00000000004BA0DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUITextFieldImpl::TextInputDidFinish(Caver::GUITextFieldImpl *this)
{
  __int64 v2; // x0
  __int64 result; // x0

  v2 = *((_QWORD *)this + 39);
  if ( !v2 )
    return (*(__int64 (__fastcall **)(Caver::GUITextFieldImpl *))(*(_QWORD *)this + 208LL))(this);
  result = (*(__int64 (__fastcall **)(__int64, Caver::GUITextFieldImpl *))(*(_QWORD *)v2 + 8LL))(v2, this);
  if ( (result & 1) != 0 )
    return (*(__int64 (__fastcall **)(Caver::GUITextFieldImpl *))(*(_QWORD *)this + 208LL))(this);
  return result;
}

