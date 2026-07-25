/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D9FC0
 * Mangled: _ZN5Caver5Proto15EditorViewState10SharedCtorEv
 * Demangled: Caver::Proto::EditorViewState::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 10
 *   insn=0x00000000002D9FC0 string=0x00000000002D9FC4 "H "
 *   insn=0x00000000002D9FC4 string=0x00000000002D9FC8 "i "
 *   insn=0x00000000002D9FC8 string=0x00000000002D9FCC ""
 *   insn=0x00000000002D9FCC string=0x00000000002D9FD0 ")"
 *   insn=0x00000000002D9FD0 string=0x00000000002D9FD4 "J "
 *   insn=0x00000000002D9FD4 string=0x00000000002D9FD8 "J"
 *   insn=0x00000000002D9FDC string=0x00000000002D9FE0 " "
 *   insn=0x00000000002D9FE4 string=0x00000000002D9FE8 "@"
 *   insn=0x00000000002D9FE8 string=0x00000000002D9FEC ""
 *   insn=0x00000000002D9FEC string=0x00000000002D9FF0 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::EditorViewState::SharedCtor(__n128 *this)
{
  __n128 result; // q0

  this->n128_u32[2] = 0;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::EditorViewState::_default_inspected_object_identifier_;
  this[6].n128_u64[1] = 0;
  this[7].n128_u64[0] = 0;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::EditorViewState::_default_inspected_template_identifier_;
  this[1].n128_u64[0] = (unsigned __int64)&Caver::Proto::EditorViewState::_default_file_path_;
  this[6].n128_u32[0] = 1;
  this[5] = result;
  this[7].n128_u32[2] = 0;
  return result;
}

