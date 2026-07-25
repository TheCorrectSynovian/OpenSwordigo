/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000489E98
 * Mangled: _ZN5Caver28SavePolygonToProtobufMessageERKNS_7PolygonEPNS_5Proto7PolygonE
 * Demangled: Caver::SavePolygonToProtobufMessage(Caver::Polygon const&,Caver::Proto::Polygon *)
 *
 * Callers: 1
 *   0x00000000002012C0  Caver::SavePolygonToProtobufMessage(Caver::Polygon const&,Caver::Proto::Polygon *)
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7CD0  Caver::Proto::Vector2::Vector2(void)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x0000000000489FA0  Caver::ImageTypeFromProtobufValue(Caver::Proto::ImageType)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 31
 *   insn=0x0000000000489EB8 string=0x0000000000489EBC ""
 *   insn=0x0000000000489EC0 string=0x0000000000489EC4 "uB"
 *   insn=0x0000000000489EC4 string=0x0000000000489EC8 "i"C)"
 *   insn=0x0000000000489ECC string=0x0000000000489ED0 ")}@"
 *   insn=0x0000000000489ED0 string=0x0000000000489ED4 "?"
 *   insn=0x0000000000489ED8 string=0x0000000000489EDC "h\n@"
 *   insn=0x0000000000489ED8 string=0x0000000000489EF0 "i"@"
 *   insn=0x0000000000489EDC string=0x0000000000489EE0 "*"
 *   insn=0x0000000000489EE0 string=0x0000000000489EE4 "j"
 *   insn=0x0000000000489EF8 string=0x0000000000489F0C ""
 *   insn=0x0000000000489F04 string=0x0000000000489F08 "h"
 *   insn=0x0000000000489F04 string=0x00000000001FAD20 "0'"
 *   insn=0x0000000000489F10 string=0x0000000000489F14 "h"
 *   insn=0x0000000000489F18 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000489F1C string=0x0000000000489F20 "l"
 *   insn=0x0000000000489F20 string=0x0000000000489F24 "h"
 *   insn=0x0000000000489F20 string=0x00000000001F7CD0 "0'"
 *   insn=0x0000000000489F24 string=0x0000000000489F28 "i\n@"
 *   insn=0x0000000000489F28 string=0x0000000000489F2C "\n"
 *   insn=0x0000000000489F2C string=0x0000000000489F30 "j"
 *   insn=0x0000000000489F30 string=0x0000000000489F34 "6y("
 *   insn=0x0000000000489F38 string=0x0000000000489F3C "\t{w"
 *   insn=0x0000000000489F40 string=0x0000000000489F44 ""
 *   insn=0x0000000000489F5C string=0x0000000000489F60 "iN@"
 *   insn=0x0000000000489F60 string=0x0000000000489F64 "h""
 *   insn=0x0000000000489F68 string=0x0000000000489F6C ")"
 *   insn=0x0000000000489F6C string=0x0000000000489F70 "iN"
 *   insn=0x0000000000489F70 string=0x0000000000489F74 "h&"
 *   insn=0x0000000000489F94 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000489F98 string=0x0000000000489F9C "J"
 *   insn=0x0000000000489F9C string=0x0000000000489FA0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SavePolygonToProtobufMessage(Caver *this, const Caver::Polygon *a2, Caver::Proto::Polygon *a3)
{
  __int64 v5; // x23
  int v6; // w8
  __int64 v7; // x24
  __int64 v8; // x9
  __int64 v9; // x8
  __int64 v10; // x22
  __int64 v11; // x8
  __int64 v12; // x9
  __int64 v13; // x9
  int v14; // w9
  char v15; // w8

  if ( *(int *)this >= 1 )
  {
    v5 = 0;
    do
    {
      v6 = *((_DWORD *)a2 + 7);
      v7 = *((_QWORD *)this + 1);
      v8 = *((int *)a2 + 6);
      if ( (int)v8 >= v6 )
      {
        if ( v6 == *((_DWORD *)a2 + 8) )
        {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve((const Caver::Polygon *)((char *)a2 + 16), v6 + 1);
          v6 = *((_DWORD *)a2 + 7);
        }
        *((_DWORD *)a2 + 7) = v6 + 1;
        v10 = operator new(0x18u);
        Caver::Proto::Vector2::Vector2((Caver::Proto::Vector2 *)v10);
        v11 = *((int *)a2 + 6);
        v12 = *((_QWORD *)a2 + 2);
        *((_DWORD *)a2 + 6) = v11 + 1;
        *(_QWORD *)(v12 + 8 * v11) = v10;
      }
      else
      {
        v9 = *((_QWORD *)a2 + 2);
        *((_DWORD *)a2 + 6) = v8 + 1;
        v10 = *(_QWORD *)(v9 + 8 * v8);
      }
      v13 = *(_QWORD *)(v7 + 8 * v5++);
      *(_DWORD *)(v10 + 20) |= 3u;
      *(_QWORD *)(v10 + 12) = v13;
    }
    while ( v5 < *(int *)this );
  }
  v14 = *((_DWORD *)a2 + 19);
  *((_BYTE *)a2 + 72) = *((_BYTE *)this + 32);
  v15 = *((_BYTE *)this + 33);
  *((_DWORD *)a2 + 19) = v14 | 6;
  *((_BYTE *)a2 + 73) = v15;
}

