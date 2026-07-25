/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000323170
 * Mangled: _ZN5Caver5Proto24OrbitControllerComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::OrbitControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F6150  Caver::Proto::Vector3::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FAF50  Caver::Proto::Vector3::Vector3(void)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x00000000003233F0  Caver::Proto::OrbitControllerComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 66
 *   insn=0x0000000000323184 string=0x0000000000323188 "W"
 *   insn=0x0000000000323198 string=0x000000000032319C "h"
 *   insn=0x00000000003231A0 string=0x00000000003231A4 """
 *   insn=0x00000000003231A4 string=0x00000000003231A8 "\t"
 *   insn=0x00000000003231AC string=0x00000000003231B0 "!"
 *   insn=0x00000000003231B0 string=0x00000000003231B4 ""
 *   insn=0x00000000003231B4 string=0x00000000003231B8 "a""
 *   insn=0x00000000003231B8 string=0x00000000003231BC "h"
 *   insn=0x00000000003231C0 string=0x00000000003231C4 "x"
 *   insn=0x00000000003231C0 string=0x00000000003231DC "(|"
 *   insn=0x00000000003231CC string=0x00000000001F7A40 "0'"
 *   insn=0x00000000003231D0 string=0x00000000003231D4 "a""
 *   insn=0x00000000003231D4 string=0x00000000003231D8 "a"
 *   insn=0x00000000003231E4 string=0x0000000000323218 "("
 *   insn=0x00000000003231EC string=0x0000000000323208 "("
 *   insn=0x00000000003231F4 string=0x00000000003231F8 "("
 *   insn=0x00000000003231F4 string=0x0000000000323274 "("
 *   insn=0x0000000000323200 string=0x0000000000323204 "V"
 *   insn=0x000000000032320C string=0x0000000000323210 "A"
 *   insn=0x0000000000323210 string=0x0000000000323214 "A"
 *   insn=0x0000000000323228 string=0x000000000032322C ""
 *   insn=0x0000000000323234 string=0x000000000032324C "h"
 *   insn=0x000000000032323C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000323240 string=0x0000000000323244 "C_"
 *   insn=0x0000000000323244 string=0x00000000001FAF50 "0'"
 *   insn=0x0000000000323254 string=0x0000000000323258 "\t"
 *   insn=0x000000000032325C string=0x0000000000323260 ")"
 *   insn=0x0000000000323260 string=0x0000000000323264 ""
 *   insn=0x0000000000323268 string=0x000000000032326C "h"
 *   insn=0x0000000000323270 string=0x00000000003232A0 "h&G)\n"
 *   insn=0x0000000000323278 string=0x000000000032327C "@\t"
 *   insn=0x0000000000323284 string=0x00000000001FD8D0 "0'"
 *   insn=0x0000000000323288 string=0x000000000032328C "H"
 *   insn=0x0000000000323294 string=0x0000000000323298 "nW"
 *   insn=0x0000000000323298 string=0x00000000001F9050 "0'"
 *   insn=0x00000000003232A0 string=0x00000000003232A4 "\n"
 *   insn=0x00000000003232A8 string=0x00000000003232AC "j:"
 *   insn=0x00000000003232CC string=0x00000000001F6150 "0'"
 *   insn=0x00000000003232D0 string=0x00000000003232D4 "h"
 *   insn=0x00000000003232E4 string=0x00000000003232E8 "h:@"
 *   insn=0x00000000003232E8 string=0x00000000003232EC ""
 *   insn=0x00000000003232EC string=0x00000000003232F0 "K"
 *   insn=0x00000000003232F0 string=0x00000000003232F4 "h:"
 *   insn=0x00000000003232F0 string=0x00000000003232F8 "h"
 *   insn=0x0000000000323300 string=0x0000000000323304 "\t"
 *   insn=0x0000000000323304 string=0x0000000000323308 "?U"
 *   insn=0x000000000032330C string=0x0000000000323310 ""
 *   insn=0x0000000000323310 string=0x0000000000323314 "h"
 *   insn=0x0000000000323320 string=0x0000000000323324 "@"
 *   insn=0x0000000000323320 string=0x00000000001FA750 "0'"
 *   insn=0x0000000000323330 string=0x0000000000323334 "("
 *   insn=0x0000000000323338 string=0x000000000032333C "h"
 *   insn=0x0000000000323344 string=0x0000000000323348 "\t"
 *   insn=0x0000000000323348 string=0x000000000032334C "?u"
 *   insn=0x000000000032334C string=0x0000000000323350 "a"
 *   insn=0x0000000000323350 string=0x0000000000323354 ""
 *   insn=0x0000000000323354 string=0x0000000000323358 "h"
 *   insn=0x0000000000323364 string=0x0000000000323368 " "
 *   insn=0x0000000000323374 string=0x0000000000323378 "("
 *   insn=0x000000000032337C string=0x0000000000323380 "h"
 *   insn=0x0000000000323388 string=0x000000000032338C "h.@"
 *   insn=0x000000000032338C string=0x0000000000323390 "h"
 *   insn=0x0000000000323398 string=0x000000000032339C "`"
 *   insn=0x00000000003233D8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003233E4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003233E8 string=0x00000000003233EC "6y\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::OrbitControllerComponent::MergePartialFromCodedStream(
        Caver::Proto::OrbitControllerComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x8
  unsigned __int64 v6; // x1
  unsigned int TagFallback; // w0
  unsigned int v8; // w8
  int v9; // w8
  Caver::Proto::Vector3 *v10; // x21
  char *v11; // x8
  int v12; // w8
  int v13; // w9
  int v14; // w22
  int v15; // w8
  bool v16; // vf
  int v17; // w8
  _BYTE *v18; // x8
  int v19; // w9
  _BYTE *v20; // x8
  int v21; // w9
  __int64 result; // x0
  unsigned int v23; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v24; // [xsp+8h] [xbp-38h]

  v24 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 1 )
  {
    while ( 1 )
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
      v8 = (unsigned int)v6 >> 3;
      if ( (unsigned int)v6 >> 3 == 1 )
        break;
      if ( v8 == 2 )
      {
        v9 = v6 & 7;
        if ( v9 != 5 )
          goto LABEL_21;
LABEL_33:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v23) & 1) == 0 )
          return 0;
        v19 = *((_DWORD *)this + 8);
        *((_DWORD *)this + 6) = v23;
        *((_DWORD *)this + 8) = v19 | 2;
        v20 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v20 < *((_QWORD *)a2 + 2) && *v20 == 29 )
        {
          *((_QWORD *)a2 + 1) = v20 + 1;
          goto LABEL_37;
        }
      }
      else
      {
        if ( v8 != 3 )
        {
          v9 = v6 & 7;
          goto LABEL_21;
        }
        v9 = v6 & 7;
        if ( v9 == 5 )
        {
LABEL_37:
          if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v23) & 1) == 0 )
            return 0;
          v21 = *((_DWORD *)this + 8);
          *((_DWORD *)this + 7) = v23;
          *((_DWORD *)this + 8) = v21 | 4;
          if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
          {
            result = 1;
            *((_DWORD *)a2 + 8) = 0;
            *((_BYTE *)a2 + 36) = 1;
            return result;
          }
        }
        else
        {
LABEL_21:
          if ( v9 == 4 )
            return 1;
          if ( (google::protobuf::internal::WireFormatLite::SkipField(
                  a2,
                  (google::protobuf::io::CodedInputStream *)v6,
                  a3)
              & 1) == 0 )
            return 0;
        }
      }
    }
    v9 = v6 & 7;
    if ( v9 != 2 )
      goto LABEL_21;
    v10 = (Caver::Proto::Vector3 *)*((_QWORD *)this + 2);
    *((_DWORD *)this + 8) |= 1u;
    if ( !v10 )
    {
      v10 = (Caver::Proto::Vector3 *)operator new(0x20u);
      Caver::Proto::Vector3::Vector3(v10);
      *((_QWORD *)this + 2) = v10;
    }
    v11 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v11 >= *((_QWORD *)a2 + 2) || *v11 < 0 )
    {
      if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v23) & 1) == 0 )
        return 0;
    }
    else
    {
      v23 = (unsigned __int8)*v11;
      *((_QWORD *)a2 + 1) = v11 + 1;
    }
    v12 = *((_DWORD *)a2 + 14);
    v13 = *((_DWORD *)a2 + 15);
    *((_DWORD *)a2 + 14) = v12 + 1;
    if ( v12 >= v13 )
      return 0;
    v14 = google::protobuf::io::CodedInputStream::PushLimit(a2, v23);
    if ( (Caver::Proto::Vector3::MergePartialFromCodedStream(v10, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
      return 0;
    google::protobuf::io::CodedInputStream::PopLimit(a2, v14);
    v15 = *((_DWORD *)a2 + 14);
    v16 = __OFSUB__(v15, 1);
    v17 = v15 - 1;
    if ( v17 < 0 == v16 )
      *((_DWORD *)a2 + 14) = v17;
    v18 = (_BYTE *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v18 < *((_QWORD *)a2 + 2) && *v18 == 21 )
    {
      *((_QWORD *)a2 + 1) = v18 + 1;
      goto LABEL_33;
    }
  }
}

