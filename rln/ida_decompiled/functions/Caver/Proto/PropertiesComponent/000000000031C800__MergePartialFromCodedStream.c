/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031C800
 * Mangled: _ZN5Caver5Proto19PropertiesComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::PropertiesComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
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
 *   0x000000000031C9B8  Caver::Proto::PropertiesComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 48
 *   insn=0x000000000031C814 string=0x000000000031C818 "W"
 *   insn=0x000000000031C828 string=0x000000000031C82C "h"
 *   insn=0x000000000031C830 string=0x000000000031C834 """
 *   insn=0x000000000031C834 string=0x000000000031C838 "\t"
 *   insn=0x000000000031C83C string=0x000000000031C840 "!"
 *   insn=0x000000000031C840 string=0x000000000031C844 ""
 *   insn=0x000000000031C844 string=0x000000000031C848 "a""
 *   insn=0x000000000031C848 string=0x000000000031C84C "h"
 *   insn=0x000000000031C84C string=0x000000000031C850 "?("
 *   insn=0x000000000031C858 string=0x000000000031C85C "("
 *   insn=0x000000000031C86C string=0x00000000001FD8D0 "0'"
 *   insn=0x000000000031C870 string=0x000000000031C874 ">"
 *   insn=0x000000000031C878 string=0x000000000031C87C "ql"
 *   insn=0x000000000031C87C string=0x00000000001F7A40 "0'"
 *   insn=0x000000000031C880 string=0x000000000031C884 "a""
 *   insn=0x000000000031C884 string=0x000000000031C888 "?("
 *   insn=0x000000000031C888 string=0x000000000031C88C "a"
 *   insn=0x000000000031C894 string=0x000000000031C898 ""
 *   insn=0x000000000031C8A0 string=0x000000000031C8B8 "h"
 *   insn=0x000000000031C8A4 string=0x000000000031C8A8 "Nc"
 *   insn=0x000000000031C8A8 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000031C8B0 string=0x00000000001F5000 "P'"
 *   insn=0x000000000031C8C0 string=0x000000000031C8C4 "\t"
 *   insn=0x000000000031C8C8 string=0x000000000031C8CC ")"
 *   insn=0x000000000031C8CC string=0x000000000031C8D0 ""
 *   insn=0x000000000031C8D4 string=0x000000000031C8D8 "h"
 *   insn=0x000000000031C8DC string=0x000000000031C8F0 "h&G)\n"
 *   insn=0x000000000031C8E8 string=0x00000000001F9050 "0'"
 *   insn=0x000000000031C8F0 string=0x000000000031C8F4 "\n"
 *   insn=0x000000000031C8F8 string=0x000000000031C8FC "j:"
 *   insn=0x000000000031C8FC string=0x000000000031C900 "j"
 *   insn=0x000000000031C91C string=0x000000000031C920 "`"
 *   insn=0x000000000031C91C string=0x00000000001F8D20 "0'"
 *   insn=0x000000000031C920 string=0x000000000031C924 "h"
 *   insn=0x000000000031C924 string=0x000000000031C928 "("
 *   insn=0x000000000031C930 string=0x000000000031C934 "7"
 *   insn=0x000000000031C934 string=0x000000000031C938 "h:@"
 *   insn=0x000000000031C938 string=0x000000000031C93C ""
 *   insn=0x000000000031C93C string=0x000000000031C940 "K"
 *   insn=0x000000000031C940 string=0x000000000031C944 "h:"
 *   insn=0x000000000031C940 string=0x000000000031C948 "h"
 *   insn=0x000000000031C950 string=0x000000000031C954 "h.@"
 *   insn=0x000000000031C960 string=0x000000000031C964 "`"
 *   insn=0x000000000031C984 string=0x000000000031C9A0 "Lf"
 *   insn=0x000000000031C9A0 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000031C9A8 string=0x000000000031C9AC "Aj"
 *   insn=0x000000000031C9AC string=0x00000000001F72B0 "0'"
 *   insn=0x000000000031C9B4 string=0x000000000031C9B8 "\t`@9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PropertiesComponent::MergePartialFromCodedStream(
        Caver::Proto::PropertiesComponent *this,
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

