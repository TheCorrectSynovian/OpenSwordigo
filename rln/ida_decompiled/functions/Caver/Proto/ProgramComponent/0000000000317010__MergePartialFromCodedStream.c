/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000317010
 * Mangled: _ZN5Caver5Proto16ProgramComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::ProgramComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
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
 *   0x0000000000317384  Caver::Proto::ProgramComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 102
 *   insn=0x0000000000317024 string=0x0000000000317028 "W"
 *   insn=0x0000000000317040 string=0x0000000000317044 "h"
 *   insn=0x0000000000317048 string=0x000000000031704C """
 *   insn=0x000000000031704C string=0x0000000000317050 "\t"
 *   insn=0x0000000000317054 string=0x0000000000317058 "!"
 *   insn=0x0000000000317058 string=0x000000000031705C ""
 *   insn=0x000000000031705C string=0x0000000000317060 "a""
 *   insn=0x0000000000317060 string=0x0000000000317064 "h"
 *   insn=0x0000000000317068 string=0x0000000000317084 "(|"
 *   insn=0x0000000000317070 string=0x0000000000317074 "s"
 *   insn=0x0000000000317074 string=0x00000000001F7A40 "0'"
 *   insn=0x0000000000317078 string=0x000000000031707C "a""
 *   insn=0x000000000031707C string=0x0000000000317080 "A"
 *   insn=0x0000000000317084 string=0x0000000000317088 ""
 *   insn=0x000000000031708C string=0x0000000000317090 ""
 *   insn=0x0000000000317090 string=0x0000000000317094 "{"
 *   insn=0x0000000000317090 string=0x0000000000317170 "("
 *   insn=0x0000000000317094 string=0x0000000000317098 ""
 *   insn=0x000000000031709C string=0x00000000003170A0 "("
 *   insn=0x000000000031709C string=0x00000000003170D0 "("
 *   insn=0x000000000031709C string=0x0000000000317100 "("
 *   insn=0x000000000031709C string=0x000000000031715C "("
 *   insn=0x00000000003170A4 string=0x00000000003170A8 "i"
 *   insn=0x00000000003170A8 string=0x00000000003170AC "?"
 *   insn=0x00000000003170B0 string=0x00000000003170B4 "*"
 *   insn=0x00000000003170B8 string=0x00000000003170BC "J"
 *   insn=0x00000000003170BC string=0x00000000003170C0 ")"
 *   insn=0x00000000003170C4 string=0x00000000003170C8 "i"
 *   insn=0x00000000003170C8 string=0x00000000003170CC "6"
 *   insn=0x00000000003170D4 string=0x00000000003170D8 "i"
 *   insn=0x00000000003170D8 string=0x00000000003170DC "?"
 *   insn=0x00000000003170E0 string=0x00000000003170E4 "*"
 *   insn=0x00000000003170E4 string=0x00000000003170E8 "j"
 *   insn=0x00000000003170E8 string=0x00000000003170EC "J"
 *   insn=0x00000000003170EC string=0x00000000003170F0 ")"
 *   insn=0x00000000003170F4 string=0x00000000003170F8 "i"
 *   insn=0x00000000003170F8 string=0x00000000003170FC "t"
 *   insn=0x0000000000317104 string=0x0000000000317108 "i"
 *   insn=0x0000000000317108 string=0x000000000031710C "?"
 *   insn=0x0000000000317110 string=0x0000000000317114 "("
 *   insn=0x0000000000317118 string=0x000000000031711C ""
 *   insn=0x000000000031711C string=0x0000000000317120 ")"
 *   insn=0x0000000000317124 string=0x0000000000317128 "i"
 *   insn=0x0000000000317130 string=0x0000000000317144 "h"
 *   insn=0x0000000000317138 string=0x000000000031713C ")"
 *   insn=0x000000000031714C string=0x0000000000317150 "h.@"
 *   insn=0x0000000000317168 string=0x000000000031716C ""
 *   insn=0x0000000000317180 string=0x00000000001FD8D0 "0'"
 *   insn=0x0000000000317184 string=0x0000000000317188 "j"
 *   insn=0x0000000000317194 string=0x00000000001F9050 "0'"
 *   insn=0x000000000031719C string=0x00000000003171A0 "i"
 *   insn=0x00000000003171A4 string=0x00000000003171A8 "_"
 *   insn=0x00000000003171B0 string=0x00000000003171B4 "j"
 *   insn=0x00000000003171B4 string=0x00000000003171B8 "?"
 *   insn=0x00000000003171BC string=0x00000000003171C0 """
 *   insn=0x00000000003171C0 string=0x00000000003171C4 "("
 *   insn=0x00000000003171CC string=0x00000000003171D0 "("
 *   insn=0x00000000003171D0 string=0x00000000003171D4 "h"
 *   insn=0x00000000003171D8 string=0x00000000003171DC "H"
 *   insn=0x00000000003171E4 string=0x00000000003171FC "h"
 *   insn=0x00000000003171EC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003171F4 string=0x00000000001F5000 "P'"
 *   insn=0x0000000000317204 string=0x0000000000317208 "\t"
 *   insn=0x000000000031720C string=0x0000000000317210 ")"
 *   insn=0x0000000000317210 string=0x0000000000317214 ""
 *   insn=0x0000000000317218 string=0x000000000031721C "h"
 *   insn=0x0000000000317220 string=0x0000000000317234 "h&G)\n"
 *   insn=0x0000000000317234 string=0x0000000000317238 "\n"
 *   insn=0x000000000031723C string=0x0000000000317240 "j:"
 *   insn=0x0000000000317240 string=0x0000000000317244 "j"
 *   insn=0x0000000000317260 string=0x0000000000317264 "`"
 *   insn=0x0000000000317260 string=0x00000000001F8D20 "0'"
 *   insn=0x0000000000317264 string=0x0000000000317268 "h"
 *   insn=0x0000000000317268 string=0x000000000031726C "("
 *   insn=0x0000000000317278 string=0x000000000031727C "h:@"
 *   insn=0x000000000031727C string=0x0000000000317280 ""
 *   insn=0x0000000000317280 string=0x0000000000317284 "K"
 *   insn=0x0000000000317284 string=0x0000000000317288 "h:"
 *   insn=0x0000000000317284 string=0x000000000031728C "i"
 *   insn=0x000000000031728C string=0x0000000000317290 "?"
 *   insn=0x0000000000317294 string=0x0000000000317298 "*"
 *   insn=0x0000000000317298 string=0x000000000031729C "_a"
 *   insn=0x000000000031729C string=0x00000000003172A0 "!"
 *   insn=0x00000000003172A0 string=0x00000000003172A4 ")"
 *   insn=0x00000000003172A4 string=0x00000000003172A8 "i"
 *   insn=0x00000000003172A8 string=0x00000000003172AC "?"
 *   insn=0x00000000003172B8 string=0x00000000003172BC "e"
 *   insn=0x00000000003172C4 string=0x00000000003172C8 "i"
 *   insn=0x00000000003172CC string=0x00000000003172D0 "_"
 *   insn=0x00000000003172D8 string=0x00000000003172DC "j"
 *   insn=0x00000000003172DC string=0x00000000003172E0 "?"
 *   insn=0x00000000003172E8 string=0x00000000003172EC "*"
 *   insn=0x00000000003172EC string=0x00000000003172F0 "_"
 *   insn=0x00000000003172F4 string=0x00000000003172F8 ")"
 *   insn=0x00000000003172F8 string=0x00000000003172FC "i"
 *   insn=0x00000000003172FC string=0x0000000000317300 "?"
 *   insn=0x000000000031730C string=0x0000000000317310 "P"
 *   insn=0x000000000031733C string=0x0000000000317340 "a"
 *   insn=0x0000000000317360 string=0x0000000000317364 "`"
 *   insn=0x000000000031736C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000317378 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000031737C string=0x0000000000317380 "Q"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ProgramComponent::MergePartialFromCodedStream(
        Caver::Proto::ProgramComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  int v8; // w8
  unsigned __int64 v9; // x8
  char *v10; // x9
  unsigned int v11; // w10
  _BYTE *v12; // x9
  unsigned __int64 v13; // x8
  char *v14; // x9
  unsigned int v15; // w10
  _BYTE *v16; // x9
  char *v17; // x9
  unsigned int v18; // w8
  int v19; // w9
  int v20; // w10
  int v21; // w11
  Caver::Proto::Program *v22; // x21
  char *v23; // x8
  int v24; // w8
  int v25; // w9
  int v26; // w22
  int v27; // w8
  bool v28; // vf
  int v29; // w8
  _BYTE *v30; // x9
  int v31; // w11
  __int64 result; // x0
  unsigned int v33; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v34; // [xsp+8h] [xbp-38h]

  v34 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 2 )
  {
    v5 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v5 >= *((_QWORD *)a2 + 2) || *v5 < 0 )
    {
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
      v6 = TagFallback;
      *((_DWORD *)a2 + 8) = TagFallback;
      if ( !TagFallback )
        return 1;
    }
    else
    {
      v6 = (unsigned __int8)*v5;
      *((_DWORD *)a2 + 8) = v6;
      *((_QWORD *)a2 + 1) = v5 + 1;
      if ( !(_DWORD)v6 )
        return 1;
    }
    switch ( (unsigned int)v6 >> 3 )
    {
      case 1u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_27;
        v10 = (char *)*((_QWORD *)a2 + 1);
        v9 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v10 >= v9 || *v10 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v33) & 1) == 0 )
            return 0;
          v11 = v33;
          v12 = (_BYTE *)*((_QWORD *)a2 + 1);
          v9 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v11 = (unsigned __int8)*v10;
          v12 = v10 + 1;
          v33 = v11;
          *((_QWORD *)a2 + 1) = v12;
        }
        v21 = *((_DWORD *)this + 8);
        *((_BYTE *)this + 13) = v11 != 0;
        v20 = v21 | 2;
        *((_DWORD *)this + 8) = v21 | 2;
        if ( (unsigned __int64)v12 >= v9 || *v12 != 18 )
          continue;
        *((_QWORD *)a2 + 1) = v12 + 1;
        goto LABEL_35;
      case 2u:
        v8 = v6 & 7;
        if ( v8 != 2 )
          goto LABEL_27;
        v20 = *((_DWORD *)this + 8);
LABEL_35:
        v22 = (Caver::Proto::Program *)*((_QWORD *)this + 3);
        *((_DWORD *)this + 8) = v20 | 8;
        if ( !v22 )
        {
          v22 = (Caver::Proto::Program *)operator new(0x30u);
          Caver::Proto::Program::Program(v22);
          *((_QWORD *)this + 3) = v22;
        }
        v23 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v23 >= *((_QWORD *)a2 + 2) || *v23 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v33) & 1) == 0 )
            return 0;
        }
        else
        {
          v33 = (unsigned __int8)*v23;
          *((_QWORD *)a2 + 1) = v23 + 1;
        }
        v24 = *((_DWORD *)a2 + 14);
        v25 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v24 + 1;
        if ( v24 >= v25 )
          return 0;
        v26 = google::protobuf::io::CodedInputStream::PushLimit(a2, v33);
        if ( (Caver::Proto::Program::MergePartialFromCodedStream(v22, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v26);
        v27 = *((_DWORD *)a2 + 14);
        v28 = __OFSUB__(v27, 1);
        v29 = v27 - 1;
        if ( v29 < 0 == v28 )
          *((_DWORD *)a2 + 14) = v29;
        v30 = (_BYTE *)*((_QWORD *)a2 + 1);
        v13 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v30 >= v13 || *v30 != 24 )
          continue;
        v14 = v30 + 1;
        *((_QWORD *)a2 + 1) = v14;
        if ( (unsigned __int64)v14 >= v13 )
          goto LABEL_49;
LABEL_14:
        if ( *v14 < 0 )
        {
LABEL_49:
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v33) & 1) == 0 )
            return 0;
          v15 = v33;
          v16 = (_BYTE *)*((_QWORD *)a2 + 1);
          v13 = *((_QWORD *)a2 + 2);
        }
        else
        {
          v15 = (unsigned __int8)*v14;
          v16 = v14 + 1;
          v33 = v15;
          *((_QWORD *)a2 + 1) = v16;
        }
        v31 = *((_DWORD *)this + 8);
        *((_BYTE *)this + 12) = v15 != 0;
        *((_DWORD *)this + 8) = v31 | 1;
        if ( (unsigned __int64)v16 >= v13 || *v16 != 32 )
          continue;
        v17 = v16 + 1;
        *((_QWORD *)a2 + 1) = v17;
        if ( (unsigned __int64)v17 >= v13 )
          goto LABEL_54;
LABEL_18:
        if ( (*v17 & 0x80000000) == 0 )
        {
          v18 = (unsigned __int8)*v17;
          v33 = v18;
          *((_QWORD *)a2 + 1) = v17 + 1;
          if ( v18 > 0xA )
            goto LABEL_21;
LABEL_20:
          v19 = *((_DWORD *)this + 8);
          *((_DWORD *)this + 4) = v18;
          *((_DWORD *)this + 8) = v19 | 4;
          goto LABEL_21;
        }
LABEL_54:
        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v33) & 1) != 0 )
        {
          v18 = v33;
          if ( v33 <= 0xA )
            goto LABEL_20;
LABEL_21:
          if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
          {
            result = 1;
            *((_DWORD *)a2 + 8) = 0;
            *((_BYTE *)a2 + 36) = 1;
            return result;
          }
          continue;
        }
        return 0;
      case 3u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_27;
        v14 = (char *)*((_QWORD *)a2 + 1);
        v13 = *((_QWORD *)a2 + 2);
        if ( (unsigned __int64)v14 < v13 )
          goto LABEL_14;
        goto LABEL_49;
      case 4u:
        v8 = v6 & 7;
        if ( (v6 & 7) != 0 )
          goto LABEL_27;
        v17 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v17 < *((_QWORD *)a2 + 2) )
          goto LABEL_18;
        goto LABEL_54;
      default:
        v8 = v6 & 7;
LABEL_27:
        if ( v8 == 4 )
          return 1;
        if ( (google::protobuf::internal::WireFormatLite::SkipField(
                a2,
                (google::protobuf::io::CodedInputStream *)v6,
                a3)
            & 1) == 0 )
          return 0;
        continue;
    }
  }
}

