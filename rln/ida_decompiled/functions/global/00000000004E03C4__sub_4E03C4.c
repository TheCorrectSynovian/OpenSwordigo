/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E03C4
 * Mangled: sub_4E03C4
 * Demangled: sub_4E03C4
 *
 * Callers: 1
 *   0x00000000004D81CC  google::protobuf::internal::ExtensionSet::RegisterExtension(google::protobuf::MessageLite const*,int,uchar,bool,bool)
 *
 * Callees: 7
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7D70  google::protobuf::internal::OnShutdown(void (*)(void))
 *   0x00000000001FBC40  .memset
 *   0x00000000004E04B4  sub_4E04B4
 *   0x0000000000565294  sub_565294
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 28
 *   insn=0x00000000004E03D8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004E03EC string=0x00000000004E03F0 "("
 *   insn=0x00000000004E03F0 string=0x00000000004E03F4 ""
 *   insn=0x00000000004E03F4 string=0x00000000004E03F8 "\t&"
 *   insn=0x00000000004E03F8 string=0x00000000004E03FC "`"
 *   insn=0x00000000004E03FC string=0x00000000004E0400 "*"
 *   insn=0x00000000004E0400 string=0x00000000004E0404 "\n"
 *   insn=0x00000000004E0404 string=0x00000000004E0408 "l"
 *   insn=0x00000000004E0408 string=0x00000000004E040C ")"
 *   insn=0x00000000004E040C string=0x00000000004E0410 ")"
 *   insn=0x00000000004E0414 string=0x00000000004E0418 ")1"
 *   insn=0x00000000004E0418 string=0x00000000004E041C "h1"
 *   insn=0x00000000004E041C string=0x00000000004E0420 "?"
 *   insn=0x00000000004E0424 string=0x00000000004E0428 "\t"
 *   insn=0x00000000004E042C string=0x00000000004E0430 " "
 *   insn=0x00000000004E0434 string=0x00000000004E0438 "\t"
 *   insn=0x00000000004E0438 string=0x00000000004E043C "\n"
 *   insn=0x00000000004E043C string=0x00000000004E0440 "i"
 *   insn=0x00000000004E0440 string=0x00000000004E0444 "u\n"
 *   insn=0x00000000004E0448 string=0x00000000004E049C "~"
 *   insn=0x00000000004E044C string=0x00000000004E0450 "dT"
 *   insn=0x00000000004E046C string=0x00000000001FBC40 "0'"
 *   insn=0x00000000004E0470 string=0x00000000004E0474 "I"
 *   insn=0x00000000004E0474 string=0x00000000004E0478 "t"
 *   insn=0x00000000004E047C string=0x00000000004E0480 "3A"
 *   insn=0x00000000004E0494 string=0x00000000004E0498 "6^"
 *   insn=0x00000000004E0498 string=0x00000000001F7D70 "0'"
 *   insn=0x00000000004E04A8 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_4E03C4()
{
  _QWORD *v0; // x0
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x19
  unsigned __int64 *v4; // x8
  unsigned __int64 v5; // x9
  unsigned __int64 v6; // x10
  unsigned __int64 *v7; // x11
  unsigned __int64 *v8; // x11
  unsigned __int64 v9; // t1
  unsigned __int64 v10; // x21
  float v11; // s0
  unsigned __int64 v12; // x8
  char *v13; // x0
  void (*v14)(void); // x1
  char *v15; // x20
  size_t v16; // x2
  char *v17; // x21

  v0 = (_QWORD *)operator new(0x30u);
  v3 = (__int64)v0;
  v0[2] = 0;
  v0[3] = 0;
  v0[5] = 0;
  v4 = (unsigned __int64 *)&unk_59D260;
  v5 = 304;
  v0[4] = 0x400000003F800000LL;
  do
  {
    v6 = v5 >> 1;
    v7 = &v4[v5 >> 1];
    v9 = *v7;
    v8 = v7 + 1;
    v5 = v5 - 1 - (v5 >> 1);
    if ( v9 < 0xA )
      v4 = v8;
    else
      v5 = v6;
  }
  while ( (__int64)v5 > 0 );
  v10 = *v4;
  v11 = (float)*v4;
  v12 = *v4 + 1;
  v0[5] = vcvtps_u32_f32(v11);
  v0[2] = v10;
  if ( v12 >> 61 )
    sub_565294(v0, v1, v2);
  v13 = (char *)operator new(8 * v12);
  v15 = v13;
  v16 = 8 * v10;
  v17 = &v13[8 * v10];
  if ( v16 )
    memset(v13, 0, v16);
  *(_QWORD *)(v3 + 8) = v15;
  *(_QWORD *)v17 = 4096;
  qword_6EA080 = v3;
  return google::protobuf::internal::OnShutdown((google::protobuf::internal *)sub_4E04B4, v14);
}

