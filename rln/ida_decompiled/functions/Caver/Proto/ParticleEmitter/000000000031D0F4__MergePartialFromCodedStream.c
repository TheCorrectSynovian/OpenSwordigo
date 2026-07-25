/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031D0F4
 * Mangled: _ZN5Caver5Proto15ParticleEmitter27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::ParticleEmitter::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x0000000000201A60  Caver::Proto::ParticleEmitter::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 20
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F6150  Caver::Proto::Vector3::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F7F60  google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<float,(google::protobuf::internal::WireFormatLite::FieldType)2>(google::protobuf::io::CodedInputStream *,google::protobuf::RepeatedField<float> *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001F8840  google::protobuf::io::CodedInputStream::Skip(int)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FA750  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000001FAF50  Caver::Proto::Vector3::Vector3(void)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000201760  .memcpy
 *   0x00000000002028F0  Caver::Proto::FloatColor::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000202980  google::protobuf::io::CodedInputStream::PushLimit(int)
 *   0x0000000000202E10  google::protobuf::io::CodedInputStream::PopLimit(int)
 *   0x000000000031D6E0  google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<float,(google::protobuf::internal::WireFormatLite::FieldType)2>(google::protobuf::io::CodedInputStream *,google::protobuf::RepeatedField<float> *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 177
 *   insn=0x000000000031D110 string=0x000000000031D114 "X"
 *   insn=0x000000000031D114 string=0x000000000031D118 ""
 *   insn=0x000000000031D11C string=0x000000000031D120 "z"
 *   insn=0x000000000031D130 string=0x000000000031D134 "Z"
 *   insn=0x000000000031D13C string=0x000000000031D140 "h"
 *   insn=0x000000000031D144 string=0x000000000031D148 """
 *   insn=0x000000000031D148 string=0x000000000031D14C "\t"
 *   insn=0x000000000031D150 string=0x000000000031D154 "!"
 *   insn=0x000000000031D154 string=0x000000000031D158 ""
 *   insn=0x000000000031D158 string=0x000000000031D15C "a""
 *   insn=0x000000000031D15C string=0x000000000031D160 "h"
 *   insn=0x000000000031D164 string=0x000000000031D168 "J"
 *   insn=0x000000000031D164 string=0x000000000031D180 "(|"
 *   insn=0x000000000031D16C string=0x000000000031D170 "4j"
 *   insn=0x000000000031D170 string=0x00000000001F7A40 "0'"
 *   insn=0x000000000031D174 string=0x000000000031D178 "a""
 *   insn=0x000000000031D180 string=0x000000000031D184 ""
 *   insn=0x000000000031D18C string=0x000000000031D190 "H{"
 *   insn=0x000000000031D18C string=0x000000000031D2BC "("
 *   insn=0x000000000031D190 string=0x000000000031D194 ""
 *   insn=0x000000000031D198 string=0x000000000031D19C "?"
 *   insn=0x000000000031D198 string=0x000000000031D204 "("
 *   insn=0x000000000031D198 string=0x000000000031D214 "("
 *   insn=0x000000000031D198 string=0x000000000031D22C "("
 *   insn=0x000000000031D198 string=0x000000000031D23C "("
 *   insn=0x000000000031D198 string=0x000000000031D298 "("
 *   insn=0x000000000031D198 string=0x000000000031D2A8 "("
 *   insn=0x000000000031D1A0 string=0x000000000031D1A4 "i"
 *   insn=0x000000000031D1A4 string=0x000000000031D1A8 "?"
 *   insn=0x000000000031D1A8 string=0x000000000031D1AC """
 *   insn=0x000000000031D1AC string=0x000000000031D1B0 "("
 *   insn=0x000000000031D1B4 string=0x000000000031D1B8 ""
 *   insn=0x000000000031D1B8 string=0x000000000031D1BC ")"
 *   insn=0x000000000031D1C0 string=0x000000000031D1C4 "i"
 *   insn=0x000000000031D1CC string=0x000000000031D1E0 "h"
 *   insn=0x000000000031D1D4 string=0x000000000031D1D8 ")"
 *   insn=0x000000000031D1E8 string=0x000000000031D1EC "\t"
 *   insn=0x000000000031D1EC string=0x000000000031D1F0 "?I"
 *   insn=0x000000000031D1F0 string=0x000000000031D1F4 "a"
 *   insn=0x000000000031D1F4 string=0x000000000031D1F8 ""
 *   insn=0x000000000031D1F8 string=0x000000000031D1FC "h"
 *   insn=0x000000000031D20C string=0x000000000031D210 "+"
 *   insn=0x000000000031D220 string=0x000000000031D224 "`"
 *   insn=0x000000000031D224 string=0x000000000031D228 "%"
 *   insn=0x000000000031D230 string=0x000000000031D234 "A"
 *   insn=0x000000000031D24C string=0x000000000031D250 ""
 *   insn=0x000000000031D258 string=0x000000000031D270 "h"
 *   insn=0x000000000031D260 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000031D264 string=0x000000000031D268 ".["
 *   insn=0x000000000031D268 string=0x00000000001F3F20 "P'"
 *   insn=0x000000000031D278 string=0x000000000031D27C "\t"
 *   insn=0x000000000031D27C string=0x000000000031D280 "i"
 *   insn=0x000000000031D280 string=0x000000000031D284 ")"
 *   insn=0x000000000031D284 string=0x000000000031D288 ""
 *   insn=0x000000000031D28C string=0x000000000031D290 "h"
 *   insn=0x000000000031D294 string=0x000000000031D2FC "h&G)\n"
 *   insn=0x000000000031D2AC string=0x000000000031D2B0 "a"
 *   insn=0x000000000031D2C0 string=0x000000000031D2C4 "`"
 *   insn=0x000000000031D2CC string=0x00000000001FD8D0 "0'"
 *   insn=0x000000000031D2DC string=0x000000000031D2E0 " k"
 *   insn=0x000000000031D2E0 string=0x000000000031D2E4 "@"
 *   insn=0x000000000031D2E0 string=0x00000000001F7F60 "0'"
 *   insn=0x000000000031D2E4 string=0x000000000031D4AC "h"
 *   insn=0x000000000031D2F0 string=0x000000000031D2F4 "Wo"
 *   insn=0x000000000031D2F4 string=0x00000000001F9050 "0'"
 *   insn=0x000000000031D2FC string=0x000000000031D300 "\n"
 *   insn=0x000000000031D304 string=0x000000000031D308 "j:"
 *   insn=0x000000000031D324 string=0x000000000031D328 "r"
 *   insn=0x000000000031D32C string=0x000000000031D330 "h"
 *   insn=0x000000000031D340 string=0x000000000031D344 "h:@"
 *   insn=0x000000000031D344 string=0x000000000031D348 ""
 *   insn=0x000000000031D348 string=0x000000000031D34C "K"
 *   insn=0x000000000031D34C string=0x000000000031D350 "h:"
 *   insn=0x000000000031D34C string=0x000000000031D354 "h"
 *   insn=0x000000000031D358 string=0x000000000031D35C """
 *   insn=0x000000000031D35C string=0x000000000031D360 "\t"
 *   insn=0x000000000031D360 string=0x000000000031D364 "?u"
 *   insn=0x000000000031D368 string=0x000000000031D36C "V"
 *   insn=0x000000000031D36C string=0x000000000031D4C4 ""
 *   insn=0x000000000031D374 string=0x000000000031D378 "6o"
 *   insn=0x000000000031D378 string=0x000000000031D37C "`"
 *   insn=0x000000000031D384 string=0x000000000031D388 "I"
 *   insn=0x000000000031D398 string=0x000000000031D39C "`"
 *   insn=0x000000000031D398 string=0x00000000001FA750 "0'"
 *   insn=0x000000000031D3A8 string=0x000000000031D3AC "a"
 *   insn=0x000000000031D3B4 string=0x000000000031D3B8 "?"
 *   insn=0x000000000031D3B8 string=0x000000000031D3BC "("
 *   insn=0x000000000031D3BC string=0x000000000031D3C0 "\t}@"
 *   insn=0x000000000031D3C8 string=0x000000000031D3CC ")}"
 *   insn=0x000000000031D3D0 string=0x000000000031D3D4 "}~"
 *   insn=0x000000000031D3E0 string=0x000000000031D3E4 "cl"
 *   insn=0x000000000031D3E4 string=0x00000000001F8570 "0'"
 *   insn=0x000000000031D410 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000031D424 string=0x000000000031D428 "{"
 *   insn=0x000000000031D428 string=0x000000000031D42C "h"
 *   insn=0x000000000031D42C string=0x000000000031D430 "i"
 *   insn=0x000000000031D430 string=0x000000000031D434 ")"
 *   insn=0x000000000031D434 string=0x000000000031D438 "?"
 *   insn=0x000000000031D440 string=0x000000000031D444 ")}"
 *   insn=0x000000000031D444 string=0x000000000031D448 ")"
 *   insn=0x000000000031D448 string=0x000000000031D44C "J"
 *   insn=0x000000000031D44C string=0x000000000031D450 "?"
 *   insn=0x000000000031D450 string=0x000000000031D454 "*"
 *   insn=0x000000000031D454 string=0x000000000031D458 "_"
 *   insn=0x000000000031D460 string=0x000000000031D464 "k\t"
 *   insn=0x000000000031D468 string=0x000000000031D46C ""
 *   insn=0x000000000031D470 string=0x000000000031D474 "!"
 *   insn=0x000000000031D474 string=0x000000000031D478 ""
 *   insn=0x000000000031D474 string=0x000000000031D498 "?"
 *   insn=0x000000000031D480 string=0x000000000031D484 ""
 *   insn=0x000000000031D484 string=0x000000000031D488 "my)"
 *   insn=0x000000000031D488 string=0x000000000031D48C ")"
 *   insn=0x000000000031D48C string=0x000000000031D490 "?"
 *   insn=0x000000000031D49C string=0x000000000031D4A0 "!\t\t"
 *   insn=0x000000000031D4A8 string=0x00000000001F8840 "0'"
 *   insn=0x000000000031D4B0 string=0x000000000031D4B4 "b"
 *   insn=0x000000000031D4B4 string=0x000000000031D4B8 "\t"
 *   insn=0x000000000031D4B8 string=0x000000000031D4BC "?u"
 *   insn=0x000000000031D4C0 string=0x000000000031D4D0 "\t"
 *   insn=0x000000000031D4C4 string=0x000000000031D4C8 "h"
 *   insn=0x000000000031D4D0 string=0x000000000031D4D4 "?"
 *   insn=0x000000000031D4D4 string=0x000000000031D4D8 "A"
 *   insn=0x000000000031D4D8 string=0x000000000031D4DC ""
 *   insn=0x000000000031D4DC string=0x000000000031D4E0 "h"
 *   insn=0x000000000031D4FC string=0x000000000031D500 "("
 *   insn=0x000000000031D504 string=0x000000000031D508 "h"
 *   insn=0x000000000031D510 string=0x000000000031D514 "\t"
 *   insn=0x000000000031D514 string=0x000000000031D518 "?"
 *   insn=0x000000000031D518 string=0x000000000031D51C "!"
 *   insn=0x000000000031D51C string=0x000000000031D520 ""
 *   insn=0x000000000031D520 string=0x000000000031D524 "h"
 *   insn=0x000000000031D540 string=0x000000000031D544 "("
 *   insn=0x000000000031D548 string=0x000000000031D54C "h"
 *   insn=0x000000000031D550 string=0x000000000031D554 "b"
 *   insn=0x000000000031D554 string=0x000000000031D558 "\t"
 *   insn=0x000000000031D558 string=0x000000000031D55C "?"
 *   insn=0x000000000031D560 string=0x000000000031D564 ""
 *   insn=0x000000000031D564 string=0x000000000031D568 "h"
 *   insn=0x000000000031D570 string=0x000000000031D574 "wt"
 *   insn=0x000000000031D584 string=0x000000000031D588 "("
 *   insn=0x000000000031D58C string=0x000000000031D590 "i"
 *   insn=0x000000000031D590 string=0x000000000031D594 "?"
 *   insn=0x000000000031D594 string=0x000000000031D598 "B"
 *   insn=0x000000000031D598 string=0x000000000031D59C "*"
 *   insn=0x000000000031D59C string=0x000000000031D5A0 "_"
 *   insn=0x000000000031D5A4 string=0x000000000031D5A8 ")"
 *   insn=0x000000000031D5A8 string=0x000000000031D5AC "i"
 *   insn=0x000000000031D5B0 string=0x000000000031D5B4 ""
 *   insn=0x000000000031D5BC string=0x000000000031D5D4 "h"
 *   insn=0x000000000031D5C0 string=0x000000000031D5C4 "`"
 *   insn=0x000000000031D5C8 string=0x000000000031D5CC "av"
 *   insn=0x000000000031D5CC string=0x00000000001FAF50 "0'"
 *   insn=0x000000000031D5DC string=0x000000000031D5E0 "\t"
 *   insn=0x000000000031D5E4 string=0x000000000031D5E8 ")"
 *   insn=0x000000000031D5E8 string=0x000000000031D5EC ""
 *   insn=0x000000000031D5F0 string=0x000000000031D5F4 "h"
 *   insn=0x000000000031D5F8 string=0x000000000031D60C "h&G)\n"
 *   insn=0x000000000031D60C string=0x000000000031D610 "\n"
 *   insn=0x000000000031D614 string=0x000000000031D618 "j:"
 *   insn=0x000000000031D618 string=0x000000000031D61C "j"
 *   insn=0x000000000031D638 string=0x000000000031D63C "`"
 *   insn=0x000000000031D638 string=0x00000000001F6150 "0'"
 *   insn=0x000000000031D63C string=0x000000000031D640 "h"
 *   insn=0x000000000031D640 string=0x000000000031D644 "("
 *   insn=0x000000000031D650 string=0x000000000031D654 "h:@"
 *   insn=0x000000000031D654 string=0x000000000031D658 ""
 *   insn=0x000000000031D658 string=0x000000000031D65C "K"
 *   insn=0x000000000031D65C string=0x000000000031D660 "h:"
 *   insn=0x000000000031D65C string=0x000000000031D664 "h"
 *   insn=0x000000000031D66C string=0x000000000031D670 "h.@"
 *   insn=0x000000000031D670 string=0x000000000031D674 "h"
 *   insn=0x000000000031D67C string=0x000000000031D680 "`"
 *   insn=0x000000000031D684 string=0x000000000031D694 ""
 *   insn=0x000000000031D69C string=0x000000000031D6A0 "!"
 *   insn=0x000000000031D6C4 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000031D6D4 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000031D6D8 string=0x000000000031D6DC "z"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ParticleEmitter::MergePartialFromCodedStream(
        Caver::Proto::ParticleEmitter *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  char *v5; // x25
  char *v6; // x8
  unsigned __int64 v7; // x1
  unsigned int TagFallback; // w0
  char *v9; // x9
  unsigned int v10; // w8
  int v11; // w9
  _BYTE *v12; // x8
  Caver::Proto::FloatColor *v13; // x22
  char *v14; // x8
  int v15; // w8
  int v16; // w8
  int v17; // w9
  int v18; // w23
  int v19; // w8
  bool v20; // vf
  int v21; // w8
  _BYTE *v22; // x8
  int v23; // w23
  unsigned int v24; // w27
  int v25; // w8
  char *v26; // x22
  __int64 v27; // x9
  __int64 v28; // x8
  unsigned __int64 v29; // x0
  void *v30; // x0
  __int64 v31; // x11
  __int64 v32; // x12
  __int64 v33; // x8
  int v34; // w9
  signed int v35; // w9
  int v36; // w10
  __int64 v37; // x9
  __int64 v38; // x11
  int v39; // w13
  int v40; // w9
  _BYTE *v41; // x8
  int v42; // w9
  _BYTE *v43; // x8
  int v44; // w9
  _BYTE *v45; // x9
  Caver::Proto::Vector3 *v46; // x22
  char *v47; // x8
  int v48; // w8
  int v49; // w9
  int v50; // w23
  int v51; // w8
  int v52; // w8
  __int64 result; // x0
  unsigned int v54; // [xsp+4h] [xbp-5Ch] BYREF
  __int64 v55; // [xsp+8h] [xbp-58h]

  v5 = (char *)this + 64;
  v55 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
LABEL_2:
  while ( 2 )
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
    switch ( (unsigned int)v7 >> 3 )
    {
      case 1u:
        if ( (v7 & 7) != 0 )
          goto LABEL_33;
        v9 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v9 >= *((_QWORD *)a2 + 2) || *v9 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v54) & 1) == 0 )
            return 0;
          v10 = v54;
          if ( v54 > 5 )
            goto LABEL_13;
        }
        else
        {
          v10 = (unsigned __int8)*v9;
          v54 = v10;
          *((_QWORD *)a2 + 1) = v9 + 1;
          if ( v10 > 5 )
          {
LABEL_13:
            v12 = (_BYTE *)*((_QWORD *)a2 + 1);
            if ( (unsigned __int64)v12 < *((_QWORD *)a2 + 2) && *v12 == 18 )
            {
              *((_QWORD *)a2 + 1) = v12 + 1;
              goto LABEL_24;
            }
            continue;
          }
        }
        v11 = *((_DWORD *)this + 20);
        *((_DWORD *)this + 3) = v10;
        *((_DWORD *)this + 20) = v11 | 1;
        goto LABEL_13;
      case 2u:
        if ( (v7 & 7) != 2 )
          goto LABEL_33;
LABEL_24:
        v13 = (Caver::Proto::FloatColor *)*((_QWORD *)this + 3);
        *((_DWORD *)this + 20) |= 4u;
        if ( !v13 )
        {
          v13 = (Caver::Proto::FloatColor *)operator new(0x20u);
          Caver::Proto::FloatColor::FloatColor(v13);
          *((_QWORD *)this + 3) = v13;
        }
        v14 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v14 >= *((_QWORD *)a2 + 2) || *v14 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v54) & 1) == 0 )
            return 0;
        }
        else
        {
          v54 = (unsigned __int8)*v14;
          *((_QWORD *)a2 + 1) = v14 + 1;
        }
        v16 = *((_DWORD *)a2 + 14);
        v17 = *((_DWORD *)a2 + 15);
        *((_DWORD *)a2 + 14) = v16 + 1;
        if ( v16 >= v17 )
          return 0;
        v18 = google::protobuf::io::CodedInputStream::PushLimit(a2, v54);
        if ( (Caver::Proto::FloatColor::MergePartialFromCodedStream(v13, a2) & 1) == 0 || !*((_BYTE *)a2 + 36) )
          return 0;
        google::protobuf::io::CodedInputStream::PopLimit(a2, v18);
        v19 = *((_DWORD *)a2 + 14);
        v20 = __OFSUB__(v19, 1);
        v21 = v19 - 1;
        if ( v21 < 0 == v20 )
          *((_DWORD *)a2 + 14) = v21;
        v22 = (_BYTE *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v22 < *((_QWORD *)a2 + 2) && *v22 == 29 )
          goto LABEL_72;
        continue;
      case 3u:
        if ( (v7 & 7) == 2 )
        {
          if ( (google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<float,(google::protobuf::internal::WireFormatLite::FieldType)2>(a2)
              & 1) == 0 )
            return 0;
          goto LABEL_70;
        }
        if ( (v7 & 7) == 5 )
        {
          while ( 1 )
          {
            if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v54) & 1) == 0 )
              return 0;
            v23 = *((_DWORD *)this + 14);
            v24 = v54;
            if ( v23 == *((_DWORD *)this + 15) )
            {
              v25 = 2 * v23 < v23 + 1 ? v23 + 1 : 2 * v23;
              v26 = (char *)*((_QWORD *)this + 6);
              v27 = ((unsigned __int64)v25 * (unsigned __int128)4uLL) >> 64;
              *((_DWORD *)this + 15) = v25;
              v28 = 4LL * v25;
              v29 = v27 ? -1LL : v28;
              v30 = (void *)operator new[](v29);
              *((_QWORD *)this + 6) = v30;
              memcpy(v30, v26, 4LL * v23);
              if ( v26 != v5 )
              {
                if ( v26 )
                {
                  operator delete[](v26);
                  v23 = *((_DWORD *)this + 14);
                }
              }
            }
            v31 = *((_QWORD *)this + 6);
            v32 = v23 + 1LL;
            *((_DWORD *)this + 14) = v32;
            *(_DWORD *)(v31 + 4LL * v23) = v24;
            v33 = *((_QWORD *)a2 + 1);
            v34 = *((_DWORD *)a2 + 4) - v33;
            if ( v34 >= 1 )
            {
              v35 = v34 / 5u;
              v36 = *((_DWORD *)this + 15) - v32;
              if ( v35 < v36 )
                v36 = v35;
              if ( v36 >= 1 )
              {
                v37 = 0;
                v38 = v31 + 4 * v32;
                do
                {
                  if ( *(_BYTE *)v33 != 29 )
                    break;
                  v39 = *(_DWORD *)(v33 + 1);
                  *((_DWORD *)this + 14) = v23 + 2 + v37;
                  v33 += 5;
                  *(_DWORD *)(v38 + 4 * v37++) = v39;
                }
                while ( (int)v37 < v36 );
                if ( (int)v37 >= 1 )
                  google::protobuf::io::CodedInputStream::Skip(a2);
              }
            }
LABEL_70:
            v22 = (_BYTE *)*((_QWORD *)a2 + 1);
            if ( (unsigned __int64)v22 >= *((_QWORD *)a2 + 2) )
              goto LABEL_2;
            if ( *v22 != 29 )
            {
              if ( *v22 == 37 )
              {
                *((_QWORD *)a2 + 1) = v22 + 1;
LABEL_75:
                if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v54) & 1) == 0 )
                  return 0;
                v40 = *((_DWORD *)this + 20);
                *((_DWORD *)this + 8) = v54;
                *((_DWORD *)this + 20) = v40 | 8;
                v41 = (_BYTE *)*((_QWORD *)a2 + 1);
                if ( (unsigned __int64)v41 < *((_QWORD *)a2 + 2) && *v41 == 45 )
                {
                  *((_QWORD *)a2 + 1) = v41 + 1;
LABEL_79:
                  if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v54) & 1) == 0 )
                    return 0;
                  v42 = *((_DWORD *)this + 20);
                  *((_DWORD *)this + 9) = v54;
                  *((_DWORD *)this + 20) = v42 | 0x10;
                  v43 = (_BYTE *)*((_QWORD *)a2 + 1);
                  if ( (unsigned __int64)v43 < *((_QWORD *)a2 + 2) && *v43 == 53 )
                  {
                    *((_QWORD *)a2 + 1) = v43 + 1;
LABEL_83:
                    if ( (google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(a2, &v54) & 1) == 0 )
                      return 0;
                    v44 = *((_DWORD *)this + 20);
                    *((_DWORD *)this + 10) = v54;
                    v15 = v44 | 0x20;
                    *((_DWORD *)this + 20) = v44 | 0x20;
                    v45 = (_BYTE *)*((_QWORD *)a2 + 1);
                    if ( (unsigned __int64)v45 < *((_QWORD *)a2 + 2) && *v45 == 58 )
                    {
                      *((_QWORD *)a2 + 1) = v45 + 1;
LABEL_87:
                      v46 = (Caver::Proto::Vector3 *)*((_QWORD *)this + 2);
                      *((_DWORD *)this + 20) = v15 | 2;
                      if ( !v46 )
                      {
                        v46 = (Caver::Proto::Vector3 *)operator new(0x20u);
                        Caver::Proto::Vector3::Vector3(v46);
                        *((_QWORD *)this + 2) = v46;
                      }
                      v47 = (char *)*((_QWORD *)a2 + 1);
                      if ( (unsigned __int64)v47 >= *((_QWORD *)a2 + 2) || *v47 < 0 )
                      {
                        if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v54) & 1) == 0 )
                          return 0;
                      }
                      else
                      {
                        v54 = (unsigned __int8)*v47;
                        *((_QWORD *)a2 + 1) = v47 + 1;
                      }
                      v48 = *((_DWORD *)a2 + 14);
                      v49 = *((_DWORD *)a2 + 15);
                      *((_DWORD *)a2 + 14) = v48 + 1;
                      if ( v48 >= v49 )
                        return 0;
                      v50 = google::protobuf::io::CodedInputStream::PushLimit(a2, v54);
                      if ( (Caver::Proto::Vector3::MergePartialFromCodedStream(v46, a2) & 1) == 0
                        || !*((_BYTE *)a2 + 36) )
                      {
                        return 0;
                      }
                      google::protobuf::io::CodedInputStream::PopLimit(a2, v50);
                      v51 = *((_DWORD *)a2 + 14);
                      v20 = __OFSUB__(v51, 1);
                      v52 = v51 - 1;
                      if ( v52 < 0 == v20 )
                        *((_DWORD *)a2 + 14) = v52;
                      if ( *((_QWORD *)a2 + 1) == *((_QWORD *)a2 + 2) && *((_DWORD *)a2 + 11) )
                      {
                        result = 1;
                        *((_DWORD *)a2 + 8) = 0;
                        *((_BYTE *)a2 + 36) = 1;
                        return result;
                      }
                    }
                  }
                }
              }
              goto LABEL_2;
            }
LABEL_72:
            *((_QWORD *)a2 + 1) = v22 + 1;
          }
        }
LABEL_33:
        if ( (v7 & 7) != 4 )
        {
          if ( (google::protobuf::internal::WireFormatLite::SkipField(
                  a2,
                  (google::protobuf::io::CodedInputStream *)v7,
                  a3)
              & 1) == 0 )
            return 0;
          continue;
        }
        return 1;
      case 4u:
        if ( (v7 & 7) == 5 )
          goto LABEL_75;
        goto LABEL_33;
      case 5u:
        if ( (v7 & 7) != 5 )
          goto LABEL_33;
        goto LABEL_79;
      case 6u:
        if ( (v7 & 7) == 5 )
          goto LABEL_83;
        goto LABEL_33;
      case 7u:
        if ( (v7 & 7) != 2 )
          goto LABEL_33;
        v15 = *((_DWORD *)this + 20);
        goto LABEL_87;
      default:
        goto LABEL_33;
    }
  }
}

