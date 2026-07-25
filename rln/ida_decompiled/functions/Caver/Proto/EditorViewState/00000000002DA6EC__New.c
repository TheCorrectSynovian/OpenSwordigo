/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DA6EC
 * Mangled: _ZNK5Caver5Proto15EditorViewState3NewEv
 * Demangled: Caver::Proto::EditorViewState::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 15
 *   insn=0x00000000002DA6F8 string=0x00000000002DA6FC "J "
 *   insn=0x00000000002DA6F8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002DA6FC string=0x00000000002DA700 "J"
 *   insn=0x00000000002DA700 string=0x00000000002DA704 ""
 *   insn=0x00000000002DA708 string=0x00000000002DA70C "\n "
 *   insn=0x00000000002DA70C string=0x00000000002DA710 "h "
 *   insn=0x00000000002DA710 string=0x00000000002DA714 ""
 *   insn=0x00000000002DA714 string=0x00000000002DA718 "\t("
 *   insn=0x00000000002DA720 string=0x00000000002DA724 "`"
 *   insn=0x00000000002DA724 string=0x00000000002DA728 "H "
 *   insn=0x00000000002DA728 string=0x00000000002DA72C "mD"
 *   insn=0x00000000002DA734 string=0x00000000002DA738 "A"
 *   insn=0x00000000002DA738 string=0x00000000002DA73C ""
 *   insn=0x00000000002DA73C string=0x00000000002DA740 "H "
 *   insn=0x00000000002DA740 string=0x00000000002DA744 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::EditorViewState::New(Caver::Proto::EditorViewState *this)
{
  __n128 *v1; // x0
  __n128 result; // q0

  v1 = (__n128 *)operator new(0x80u);
  v1[1].n128_u64[0] = (unsigned __int64)&Caver::Proto::EditorViewState::_default_file_path_;
  v1[1].n128_u64[1] = (unsigned __int64)v1[3].n128_u64;
  v1[2].n128_u32[2] = 4;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::EditorViewState::_default_inspected_object_identifier_;
  v1[6].n128_u32[0] = 1;
  v1[2].n128_u64[0] = 0;
  v1->n128_u32[2] = 0;
  v1->n128_u64[0] = (unsigned __int64)off_6C6570;
  v1[6].n128_u64[1] = 0;
  v1[7].n128_u64[0] = 0;
  v1[7].n128_u32[2] = 0;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::EditorViewState::_default_inspected_template_identifier_;
  v1[5] = result;
  return result;
}

