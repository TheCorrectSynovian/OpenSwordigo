/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004DD65C
 * Mangled: _ZNK6google8protobuf8internal12ExtensionSet13IsInitializedEv
 * Demangled: google::protobuf::internal::ExtensionSet::IsInitialized(void)
 *
 * Callers: 1
 *   0x00000000001FA900  google::protobuf::internal::ExtensionSet::IsInitialized(void)
 *
 * Callees: 1
 *   0x000000000054C6A0  sub_54C6A0
 *
 * Referenced strings: 18
 *   insn=0x00000000004DD678 string=0x00000000004DD67C "U"
 *   insn=0x00000000004DD680 string=0x00000000004DD684 "h"
 *   insn=0x00000000004DD68C string=0x00000000004DD690 "a"
 *   insn=0x00000000004DD690 string=0x00000000004DD694 "h"
 *   insn=0x00000000004DD694 string=0x00000000004DD698 "H"
 *   insn=0x00000000004DD698 string=0x00000000004DD69C "h"
 *   insn=0x00000000004DD698 string=0x00000000004DD6E0 "h"
 *   insn=0x00000000004DD69C string=0x00000000004DD6A0 "\t\t@"
 *   insn=0x00000000004DD6A0 string=0x00000000004DD6A4 "?"
 *   insn=0x00000000004DD6AC string=0x00000000004DD6B0 ""
 *   insn=0x00000000004DD6B4 string=0x00000000004DD6B8 ""
 *   insn=0x00000000004DD6B8 string=0x00000000004DD6BC ""
 *   insn=0x00000000004DD6C4 string=0x00000000004DD6C8 "h"
 *   insn=0x00000000004DD6CC string=0x00000000004DD6D0 "\t\t"
 *   insn=0x00000000004DD6D8 string=0x00000000004DD6DC ""
 *   insn=0x00000000004DD6E4 string=0x00000000004DD6E8 "`"
 *   insn=0x00000000004DD6E8 string=0x00000000004DD6EC ""
 *   insn=0x00000000004DD6EC string=0x00000000004DD6F0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::ExtensionSet::IsInitialized(
        google::protobuf::internal::ExtensionSet *this)
{
  __int64 v1; // x19
  char *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x22

  v1 = *((_QWORD *)this + 3);
  v2 = (char *)this + 8;
  if ( (google::protobuf::internal::ExtensionSet *)v1 == (google::protobuf::internal::ExtensionSet *)((char *)this + 8) )
    return 1;
  while ( 1 )
  {
    if ( google::protobuf::internal::WireFormatLite::kFieldTypeToCppTypeMap[*(unsigned __int8 *)(v1 + 48)] != 10 )
      goto LABEL_11;
    if ( *(_BYTE *)(v1 + 49) )
      break;
    if ( !*(_BYTE *)(v1 + 50)
      && ((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + 40) + 40LL))(*(_QWORD *)(v1 + 40)) & 1) == 0 )
    {
      return 0;
    }
LABEL_11:
    v1 = sub_54C6A0(v1);
    if ( (char *)v1 == v2 )
      return 1;
  }
  v3 = *(_QWORD *)(v1 + 40);
  if ( *(int *)(v3 + 8) < 1 )
    goto LABEL_11;
  v4 = 0;
  while ( ((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v3 + 8 * v4) + 40LL))(*(_QWORD *)(*(_QWORD *)v3 + 8 * v4))
         & 1) != 0 )
  {
    v3 = *(_QWORD *)(v1 + 40);
    if ( ++v4 >= *(int *)(v3 + 8) )
      goto LABEL_11;
  }
  return 0;
}

