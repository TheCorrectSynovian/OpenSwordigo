/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FC144
 * Mangled: _ZN5Caver5Proto14ObjectTemplate27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::ObjectTemplate::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000001F8A90  Caver::Proto::ObjectTemplate::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 9
 *   0x00000000001F33F0  Caver::Proto::SceneObject::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *
 * Referenced strings: 63
 *   insn=0x00000000002FC15C string=0x00000000002FC160 "H"
 *   insn=0x00000000002FC160 string=0x00000000002FC164 "I"
 *   insn=0x00000000002FC164 string=0x00000000002FC168 "W"
 *   insn=0x00000000002FC168 string=0x00000000002FC16C "!A"
 *   insn=0x00000000002FC16C string=0x00000000002FC170 ")9@"
 *   insn=0x00000000002FC170 string=0x00000000002FC174 "K"
 *   insn=0x00000000002FC178 string=0x00000000002FC17C "k"
 *   insn=0x00000000002FC17C string=0x00000000002FC180 " "
 *   insn=0x00000000002FC190 string=0x00000000002FC194 "`"
 *   insn=0x00000000002FC1A0 string=0x00000000002FC1A4 "h"
 *   insn=0x00000000002FC1A8 string=0x00000000002FC1AC """
 *   insn=0x00000000002FC1AC string=0x00000000002FC1B0 "\t"
 *   insn=0x00000000002FC1B4 string=0x00000000002FC1B8 "!"
 *   insn=0x00000000002FC1B8 string=0x00000000002FC1BC ""
 *   insn=0x00000000002FC1BC string=0x00000000002FC1C0 "a""
 *   insn=0x00000000002FC1C0 string=0x00000000002FC1C4 "h"
 *   insn=0x00000000002FC1C8 string=0x00000000002FC1CC "m"
 *   insn=0x00000000002FC1C8 string=0x00000000002FC1E4 "(|"
 *   insn=0x00000000002FC1D0 string=0x00000000002FC1D4 ""
 *   insn=0x00000000002FC1D4 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000002FC1D8 string=0x00000000002FC1DC "a""
 *   insn=0x00000000002FC1EC string=0x00000000002FC208 "("
 *   insn=0x00000000002FC1F4 string=0x00000000002FC1F8 "("
 *   insn=0x00000000002FC1F4 string=0x00000000002FC294 "("
 *   insn=0x00000000002FC200 string=0x00000000002FC204 "M"
 *   insn=0x00000000002FC20C string=0x00000000002FC210 "A"
 *   insn=0x00000000002FC218 string=0x00000000002FC21C ""
 *   insn=0x00000000002FC220 string=0x00000000002FC224 "U"
 *   insn=0x00000000002FC224 string=0x00000000002FC26C "h"
 *   insn=0x00000000002FC22C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002FC274 string=0x00000000002FC278 "\t"
 *   insn=0x00000000002FC27C string=0x00000000002FC280 ")"
 *   insn=0x00000000002FC280 string=0x00000000002FC284 ""
 *   insn=0x00000000002FC288 string=0x00000000002FC28C "h"
 *   insn=0x00000000002FC290 string=0x00000000002FC2C0 "h&G)\n"
 *   insn=0x00000000002FC298 string=0x00000000002FC29C " "
 *   insn=0x00000000002FC2A4 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000002FC2A8 string=0x00000000002FC2AC "7"
 *   insn=0x00000000002FC2B4 string=0x00000000002FC2B8 "f"
 *   insn=0x00000000002FC2B8 string=0x00000000002FC2BC "`"
 *   insn=0x00000000002FC2B8 string=0x00000000001F9050 "0'"
 *   insn=0x00000000002FC2C0 string=0x00000000002FC2C4 "\n"
 *   insn=0x00000000002FC2C8 string=0x00000000002FC2CC "j:"
 *   insn=0x00000000002FC2E8 string=0x00000000002FC2EC "A"
 *   insn=0x00000000002FC2EC string=0x00000000001F33F0 "P'"
 *   insn=0x00000000002FC2F0 string=0x00000000002FC2F4 "h"
 *   insn=0x00000000002FC304 string=0x00000000002FC308 "h:@"
 *   insn=0x00000000002FC308 string=0x00000000002FC30C ""
 *   insn=0x00000000002FC30C string=0x00000000002FC310 "K"
 *   insn=0x00000000002FC310 string=0x00000000002FC314 "h:"
 *   insn=0x00000000002FC310 string=0x00000000002FC318 "h"
 *   insn=0x00000000002FC31C string=0x00000000002FC320 """
 *   insn=0x00000000002FC320 string=0x00000000002FC324 "\t"
 *   insn=0x00000000002FC324 string=0x00000000002FC328 "?U"
 *   insn=0x00000000002FC32C string=0x00000000002FC330 ""
 *   insn=0x00000000002FC330 string=0x00000000002FC334 "h"
 *   insn=0x00000000002FC340 string=0x00000000002FC344 " "
 *   insn=0x00000000002FC340 string=0x00000000001FA750 "0'"
 *   insn=0x00000000002FC350 string=0x00000000002FC354 "("
 *   insn=0x00000000002FC358 string=0x00000000002FC35C "h"
 *   insn=0x00000000002FC364 string=0x00000000002FC368 "h.@"
 *   insn=0x00000000002FC374 string=0x00000000002FC378 "`"
 *   insn=0x00000000002FC3B8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ObjectTemplate::MergePartialFromCodedStream(
        Caver::Proto::ObjectTemplate *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  __int128 v3; // q0
  char *v6; // x8
  unsigned __int64 v7; // x1
  unsigned int TagFallback; // w0
  int v9; // w8
  __int64 v10; // x21
  char *v11; // x8
  int v12; // w8
  int v13; // w9
  int v14; // w22
  int v15; // w8
  bool v16; // vf
  int v17; // w8
  _BYTE *v18; // x8
  int v19; // w9
  __int64 result; // x0
  __int128 v21; // [xsp+0h] [xbp-60h]
  unsigned int v22; // [xsp+14h] [xbp-4Ch] BYREF
  __int64 v23; // [xsp+18h] [xbp-48h]

  *(_QWORD *)&v3 = &Caver::Proto::SceneObject::_default_template_name_;
  *((_QWORD *)&v3 + 1) = &Caver::Proto::SceneObject::_default_identifier_;
  v21 = v3;
  v23 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = (char *)*((_QWORD *)a2 + 1);
      if ( (unsigned __int64)v6 >= *((_QWORD *)a2 + 2) || *v6 < 0 )
      {
        TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
        v7 = TagFallback;
        *((_DWORD *)a2 + 8) = TagFallback;
        if ( !TagFallback )
          return 1;
      }
      else
      {
        v7 = (unsigned __int8)*v6;
        *((_DWORD *)a2 + 8) = v7;
        *((_QWORD *)a2 + 1) = v6 + 1;
        if ( !(_DWORD)v7 )
          return 1;
      }
      if ( (unsigned int)v7 >> 3 == 1 )
        break;
      if ( (unsigned int)v7 >> 3 != 2 )
      {
        v9 = v7 & 7;
        goto LABEL_18;
      }
      v9 = v7 & 7;
      if ( v9 == 5 )
      {
LABEL_30:
        if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v22) & 1) == 0 )
          return 0;
        v19 = *((_DWORD *)this + 7);
        *((_DWORD *)this + 6) = v22;
        *((_DWORD *)this + 7) = v19 | 2;
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
LABEL_18:
        if ( v9 == 4 )
          return 1;
        if ( (google::protobuf::internal::WireFormatLite::SkipField(
                a2,
                (google::protobuf::io::CodedInputStream *)v7,
                a3)
            & 1) == 0 )
          return 0;
      }
    }
    v9 = v7 & 7;
    if ( v9 != 2 )
      goto LABEL_18;
    v10 = *((_QWORD *)this + 2);
    *((_DWORD *)this + 7) |= 1u;
    if ( !v10 )
    {
      v10 = operator new(0x90u);
      *(_QWORD *)v10 = off_6C73F8;
      *(_QWORD *)(v10 + 32) = v10 + 56;
      *(_QWORD *)(v10 + 40) = 0;
      *(_DWORD *)(v10 + 48) = 4;
      *(_DWORD *)(v10 + 8) = 0;
      *(_OWORD *)(v10 + 16) = v21;
      *(_QWORD *)(v10 + 88) = 0;
      *(_QWORD *)(v10 + 96) = 0;
      *(_DWORD *)(v10 + 104) = 1065353216;
      *(_QWORD *)(v10 + 112) = 0;
      *(_BYTE *)(v10 + 120) = 0;
      *(_QWORD *)(v10 + 128) = 0;
      *(_DWORD *)(v10 + 136) = 0;
      *((_QWORD *)this + 2) = v10;
    }
    v11 = (char *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int64)v11 >= *((_QWORD *)a2 + 2) || *v11 < 0 )
    {
      if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v22) & 1) == 0 )
        return 0;
    }
    else
    {
      v22 = (unsigned __int8)*v11;
      *((_QWORD *)a2 + 1) = v11 + 1;
    }
    v12 = *((_DWORD *)a2 + 14);
    v13 = *((_DWORD *)a2 + 15);
    *((_DWORD *)a2 + 14) = v12 + 1;
    if ( v12 >= v13 )
      return 0;
    v14 = google::protobuf::io::CodedInputStream::PushLimit(a2, v22);
    if ( (Caver::Proto::SceneObject::MergePartialFromCodedStream((Caver::Proto::SceneObject *)v10, a2) & 1) == 0
      || !*((_BYTE *)a2 + 36) )
    {
      return 0;
    }
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
      goto LABEL_30;
    }
  }
}

