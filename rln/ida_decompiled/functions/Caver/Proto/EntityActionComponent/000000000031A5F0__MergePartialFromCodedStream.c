/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031A5F0
 * Mangled: _ZN5Caver5Proto21EntityActionComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::EntityActionComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 12
 *   0x00000000001F5000  Caver::Proto::Program::Program(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F8D20  Caver::Proto::Program::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x000000000031A7A8  Caver::Proto::EntityActionComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 46
 *   insn=0x000000000031A604 string=0x000000000031A608 "W"
 *   insn=0x000000000031A618 string=0x000000000031A61C "h"
 *   insn=0x000000000031A620 string=0x000000000031A624 """
 *   insn=0x000000000031A624 string=0x000000000031A628 "\t"
 *   insn=0x000000000031A62C string=0x000000000031A630 "!"
 *   insn=0x000000000031A630 string=0x000000000031A634 ""
 *   insn=0x000000000031A634 string=0x000000000031A638 "a""
 *   insn=0x000000000031A638 string=0x000000000031A63C "h"
 *   insn=0x000000000031A63C string=0x000000000031A640 "?("
 *   insn=0x000000000031A648 string=0x000000000031A64C "("
 *   insn=0x000000000031A65C string=0x00000000001FD8D0 "0'"
 *   insn=0x000000000031A660 string=0x000000000031A664 ">"
 *   insn=0x000000000031A66C string=0x00000000001F7A40 "0'"
 *   insn=0x000000000031A670 string=0x000000000031A674 "a""
 *   insn=0x000000000031A674 string=0x000000000031A678 "?("
 *   insn=0x000000000031A678 string=0x000000000031A67C "a"
 *   insn=0x000000000031A684 string=0x000000000031A688 ""
 *   insn=0x000000000031A690 string=0x000000000031A6A8 "h"
 *   insn=0x000000000031A698 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000031A69C string=0x000000000031A6A0 "Xj"
 *   insn=0x000000000031A6A0 string=0x00000000001F5000 "P'"
 *   insn=0x000000000031A6B0 string=0x000000000031A6B4 "\t"
 *   insn=0x000000000031A6B8 string=0x000000000031A6BC ")"
 *   insn=0x000000000031A6BC string=0x000000000031A6C0 ""
 *   insn=0x000000000031A6C4 string=0x000000000031A6C8 "h"
 *   insn=0x000000000031A6CC string=0x000000000031A6E0 "h&G)\n"
 *   insn=0x000000000031A6D4 string=0x000000000031A6D8 "^z"
 *   insn=0x000000000031A6D8 string=0x00000000001F9050 "0'"
 *   insn=0x000000000031A6E0 string=0x000000000031A6E4 "\n"
 *   insn=0x000000000031A6E8 string=0x000000000031A6EC "j:"
 *   insn=0x000000000031A6EC string=0x000000000031A6F0 "j"
 *   insn=0x000000000031A70C string=0x000000000031A710 "`"
 *   insn=0x000000000031A70C string=0x00000000001F8D20 "0'"
 *   insn=0x000000000031A710 string=0x000000000031A714 "h"
 *   insn=0x000000000031A714 string=0x000000000031A718 "("
 *   insn=0x000000000031A724 string=0x000000000031A728 "h:@"
 *   insn=0x000000000031A728 string=0x000000000031A72C ""
 *   insn=0x000000000031A72C string=0x000000000031A730 "K"
 *   insn=0x000000000031A730 string=0x000000000031A734 "h:"
 *   insn=0x000000000031A730 string=0x000000000031A738 "h"
 *   insn=0x000000000031A740 string=0x000000000031A744 "h.@"
 *   insn=0x000000000031A750 string=0x000000000031A754 "`"
 *   insn=0x000000000031A790 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000031A79C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000031A7A0 string=0x000000000031A7A4 "H"
 *   insn=0x000000000031A7A4 string=0x000000000031A7A8 "\t`@9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::EntityActionComponent::MergePartialFromCodedStream(
        Caver::Proto::EntityActionComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  unsigned __int8 *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  Caver::Proto::Program *v8; // x21
  char *v9; // x8
  int v10; // w8
  int v11; // w9
  int v12; // w22
  int v13; // w8
  bool v14; // vf
  int v15; // w8
  __int64 result; // x0
  unsigned int v17; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v18; // [xsp+8h] [xbp-38h]

  v18 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
      if ( (unsigned __int64)v5 < *((_QWORD *)a2 + 2) && ((char)*v5 & 0x80000000) == 0 )
        break;
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
      v6 = TagFallback;
      *((_DWORD *)a2 + 8) = TagFallback;
      if ( TagFallback != 10 )
        goto LABEL_5;
LABEL_10:
      v8 = (Caver::Proto::Program *)*((_QWORD *)this + 2);
      *((_DWORD *)this + 6) |= 1u;
      if ( !v8 )
      {
        v8 = (Caver::Proto::Program *)operator new(0x30u);
        Caver::Proto::Program::Program(v8);
        *((_QWORD *)this + 2) = v8;
      }
      v9 = (char *)*((_QWORD *)a2 + 1);
      if ( (unsigned __int64)v9 >= *((_QWORD *)a2 + 2) || *v9 < 0 )
      {
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v17) & 1) == 0 )
          return 0;
      }
      else
      {
        v17 = (unsigned __int8)*v9;
        *((_QWORD *)a2 + 1) = v9 + 1;
      }
      v10 = *((_DWORD *)a2 + 14);
      v11 = *((_DWORD *)a2 + 15);
      *((_DWORD *)a2 + 14) = v10 + 1;
      if ( v10 >= v11 )
        return 0;
      v12 = google::protobuf::io::CodedInputStream::PushLimit(a2, v17);
      if ( (Caver::Proto::Program::MergePartialFromCodedStream(v8, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
        return 0;
      google::protobuf::io::CodedInputStream::PopLimit(a2, v12);
      v13 = *((_DWORD *)a2 + 14);
      v14 = __OFSUB__(v13, 1);
      v15 = v13 - 1;
      if ( v15 < 0 == v14 )
        *((_DWORD *)a2 + 14) = v15;
      if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
      {
        result = 1;
        *((_DWORD *)a2 + 8) = 0;
        *((_BYTE *)a2 + 36) = 1;
        return result;
      }
    }
    v6 = *v5;
    *((_DWORD *)a2 + 8) = v6;
    *((_QWORD *)a2 + 1) = v5 + 1;
    if ( (_DWORD)v6 == 10 )
      goto LABEL_10;
LABEL_5:
    if ( !(_DWORD)v6 || (v6 & 7) == 4 )
      return 1;
    if ( (google::protobuf::internal::WireFormatLite::SkipField(a2, (google::protobuf::io::CodedInputStream *)v6, a3) & 1) == 0 )
      return 0;
  }
}

