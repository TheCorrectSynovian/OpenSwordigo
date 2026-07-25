/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003BAC00
 * Mangled: _ZNK5Caver10LevelState21SaveToProtobufMessageEPNS_5Proto10LevelStateE
 * Demangled: Caver::LevelState::SaveToProtobufMessage(Caver::Proto::LevelState *)
 *
 * Callers: 1
 *   0x00000000001FF0A0  Caver::LevelState::SaveToProtobufMessage(Caver::Proto::LevelState *)
 *
 * Callees: 7
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F73F0  Caver::StateProperties::SaveToProtobufMessage(Caver::Proto::StateProperties *)
 *   0x0000000000202E20  Caver::Proto::StateProperties::StateProperties(void)
 *   0x00000000003BACEC  Caver::Map::Map(void)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 32
 *   insn=0x00000000003BAC10 string=0x00000000003BAC14 "I"
 *   insn=0x00000000003BAC18 string=0x00000000003BAC1C "h2@"
 *   insn=0x00000000003BAC1C string=0x00000000003BAC20 "`\n@"
 *   insn=0x00000000003BAC20 string=0x00000000003BAC24 ")M@"
 *   insn=0x00000000003BAC24 string=0x00000000003BAC28 ""
 *   insn=0x00000000003BAC28 string=0x00000000003BAC2C "h2"
 *   insn=0x00000000003BAC38 string=0x00000000003BAC3C "i"
 *   insn=0x00000000003BAC3C string=0x00000000003BAC40 "H"
 *   insn=0x00000000003BAC3C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003BAC40 string=0x00000000003BAC44 ""
 *   insn=0x00000000003BAC44 string=0x00000000003BAC48 "a"
 *   insn=0x00000000003BAC48 string=0x00000000003BAC4C ""
 *   insn=0x00000000003BAC4C string=0x00000000003BAC50 "`\n"
 *   insn=0x00000000003BAC58 string=0x00000000003BAC5C "i2@"
 *   insn=0x00000000003BAC60 string=0x00000000003BAC64 "("
 *   insn=0x00000000003BAC64 string=0x00000000003BAC68 "h2"
 *   insn=0x00000000003BAC68 string=0x00000000003BAC6C "jb"
 *   insn=0x00000000003BAC74 string=0x00000000003BAC78 "u"
 *   insn=0x00000000003BAC78 string=0x00000000003BAC7C "("
 *   insn=0x00000000003BAC7C string=0x00000000003BAC80 "h2"
 *   insn=0x00000000003BAC88 string=0x00000000003BAC8C "U"
 *   insn=0x00000000003BAC90 string=0x00000000003BAC94 "c "
 *   insn=0x00000000003BAC94 string=0x00000000003BAC98 "u"
 *   insn=0x00000000003BACA4 string=0x00000000003BACA8 "h2@"
 *   insn=0x00000000003BACA4 string=0x00000000001F73F0 "0'"
 *   insn=0x00000000003BACAC string=0x00000000003BACB0 "\n"
 *   insn=0x00000000003BACB0 string=0x00000000003BACB4 "j2"
 *   insn=0x00000000003BACB4 string=0x00000000003BACB8 ""
 *   insn=0x00000000003BACB8 string=0x00000000003BACBC "i*"
 *   insn=0x00000000003BACC0 string=0x00000000003BACC4 "i"
 *   insn=0x00000000003BACDC string=0x00000000003BACE0 "t"
 *   insn=0x00000000003BACE0 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::LevelState::SaveToProtobufMessage(Caver::LevelState *this, Caver::Proto::LevelState *a2)
{
  __int64 *v4; // x0
  __int64 result; // x0
  int v6; // w9
  char v7; // w10
  int v8; // w8
  Caver::Proto::StateProperties *v9; // x21
  int v10; // w9

  v4 = (__int64 *)*((_QWORD *)a2 + 2);
  *((_DWORD *)a2 + 12) |= 1u;
  if ( v4 == &Caver::Proto::LevelState::_default_level_name_ )
  {
    v4 = (__int64 *)operator new(8u);
    *v4 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 2) = v4;
  }
  result = sub_56A6A8(v4);
  v6 = *((_DWORD *)a2 + 12);
  v7 = *((_BYTE *)this + 8);
  v8 = v6 | 2;
  *((_DWORD *)a2 + 12) = v6 | 2;
  *((_BYTE *)a2 + 24) = v7;
  if ( *((_QWORD *)this + 7) )
  {
    v9 = (Caver::Proto::StateProperties *)*((_QWORD *)a2 + 4);
    *((_DWORD *)a2 + 12) = v6 | 6;
    if ( !v9 )
    {
      v9 = (Caver::Proto::StateProperties *)operator new(0x50u);
      Caver::Proto::StateProperties::StateProperties(v9);
      *((_QWORD *)a2 + 4) = v9;
    }
    result = Caver::StateProperties::SaveToProtobufMessage((Caver::LevelState *)((char *)this + 16), v9);
    v8 = *((_DWORD *)a2 + 12);
  }
  v10 = *((_DWORD *)this + 16);
  *((_DWORD *)a2 + 12) = v8 | 8;
  *((_DWORD *)a2 + 10) = v10;
  *((_DWORD *)a2 + 11) = *((_DWORD *)this + 17);
  *((_DWORD *)a2 + 12) = v8 | 0x18;
  return result;
}

