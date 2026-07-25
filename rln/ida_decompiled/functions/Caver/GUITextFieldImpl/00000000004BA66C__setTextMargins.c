/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BA66C
 * Mangled: _ZN5Caver16GUITextFieldImpl14setTextMarginsERKNS_10GUIMarginsE
 * Demangled: Caver::GUITextFieldImpl::setTextMargins(Caver::GUIMargins const&)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x00000000004BA66C string=0x00000000004BA670 "|"
 *   insn=0x00000000004BA670 string=0x00000000004BA674 " "
 *   insn=0x00000000004BA674 string=0x00000000004BA678 ""
 *   insn=0x00000000004BA67C string=0x00000000004BA680 ""
 *   insn=0x00000000004BA684 string=0x00000000004BA688 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUITextFieldImpl::setTextMargins(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 380) = *(_DWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 364) = *(_OWORD *)a2;
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
}

