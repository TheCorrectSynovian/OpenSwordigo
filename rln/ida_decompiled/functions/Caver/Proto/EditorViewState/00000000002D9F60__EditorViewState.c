/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D9F60
 * Mangled: _ZN5Caver5Proto15EditorViewStateC2Ev
 * Demangled: Caver::Proto::EditorViewState::EditorViewState(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 13
 *   insn=0x00000000002D9F60 string=0x00000000002D9F64 "J"
 *   insn=0x00000000002D9F64 string=0x00000000002D9F68 ""
 *   insn=0x00000000002D9F6C string=0x00000000002D9F70 "\n "
 *   insn=0x00000000002D9F70 string=0x00000000002D9F74 "h "
 *   insn=0x00000000002D9F74 string=0x00000000002D9F78 ""
 *   insn=0x00000000002D9F78 string=0x00000000002D9F7C "\t("
 *   insn=0x00000000002D9F84 string=0x00000000002D9F88 "`"
 *   insn=0x00000000002D9F88 string=0x00000000002D9F8C "H "
 *   insn=0x00000000002D9F8C string=0x00000000002D9F90 "mD"
 *   insn=0x00000000002D9F98 string=0x00000000002D9F9C "A"
 *   insn=0x00000000002D9F9C string=0x00000000002D9FA0 ""
 *   insn=0x00000000002D9FA0 string=0x00000000002D9FA4 "H "
 *   insn=0x00000000002D9FA4 string=0x00000000002D9FA8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::EditorViewState::EditorViewState(__n128 *this)
{
  __n128 result; // q0

  this[1].n128_u64[0] = (unsigned __int64)&Caver::Proto::EditorViewState::_default_file_path_;
  this[1].n128_u64[1] = (unsigned __int64)this[3].n128_u64;
  this[2].n128_u32[2] = 4;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::EditorViewState::_default_inspected_object_identifier_;
  this[6].n128_u32[0] = 1;
  this[2].n128_u64[0] = 0;
  this->n128_u32[2] = 0;
  this->n128_u64[0] = (unsigned __int64)off_6C6570;
  this[6].n128_u64[1] = 0;
  this[7].n128_u64[0] = 0;
  this[7].n128_u32[2] = 0;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::EditorViewState::_default_inspected_template_identifier_;
  this[5] = result;
  return result;
}

