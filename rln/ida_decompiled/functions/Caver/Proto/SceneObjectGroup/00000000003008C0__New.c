/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003008C0
 * Mangled: _ZNK5Caver5Proto16SceneObjectGroup3NewEv
 * Demangled: Caver::Proto::SceneObjectGroup::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 11
 *   insn=0x00000000003008C8 string=0x00000000003008CC "E"
 *   insn=0x00000000003008CC string=0x00000000003008D0 ")"
 *   insn=0x00000000003008CC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003008D0 string=0x00000000003008D4 ")A"
 *   insn=0x00000000003008D4 string=0x00000000003008D8 ""
 *   insn=0x00000000003008D8 string=0x00000000003008DC "\t "
 *   insn=0x00000000003008E0 string=0x00000000003008E4 "("
 *   insn=0x00000000003008E4 string=0x00000000003008E8 "("
 *   insn=0x00000000003008E8 string=0x00000000003008EC ""
 *   insn=0x00000000003008F8 string=0x00000000003008FC "A"
 *   insn=0x0000000000300904 string=0x0000000000300908 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SceneObjectGroup::New(Caver::Proto::SceneObjectGroup *this)
{
  __int64 result; // x0

  result = operator new(0x68u);
  *(_QWORD *)(result + 16) = &Caver::Proto::SceneObjectGroup::_default_identifier_;
  *(_QWORD *)(result + 24) = result + 48;
  *(_DWORD *)(result + 40) = 4;
  *(_QWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_WORD *)(result + 80) = 0;
  *(_BYTE *)(result + 82) = 0;
  *(_QWORD *)(result + 88) = 0;
  *(_QWORD *)result = off_6C7470;
  *(_DWORD *)(result + 96) = 0;
  return result;
}

