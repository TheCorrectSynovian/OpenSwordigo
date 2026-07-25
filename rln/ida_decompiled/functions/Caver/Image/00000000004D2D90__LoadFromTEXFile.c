/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D2D90
 * Mangled: _ZN5Caver5Image15LoadFromTEXFileERKSsb
 * Demangled: Caver::Image::LoadFromTEXFile(std::string const&,bool)
 *
 * Callers: 1
 *   0x00000000001F8FC0  Caver::Image::LoadFromTEXFile(std::string const&,bool)
 *
 * Callees: 12
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F5180  Caver::Image::SaveToTEXFile(std::string const&,bool)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001F8FA0  Caver::BinaryFile::~BinaryFile()
 *   0x00000000001F9610  Caver::ConvertFromFileBuffer16(uchar *,int)
 *   0x00000000001FAFA0  Caver::BinaryFile::BinaryFile(std::string const&,Caver::BinaryFile::Mode,bool)
 *   0x00000000001FC4D0  Caver::BinaryFile::ReadData(uchar *,int)
 *   0x00000000001FE090  Caver::BinaryFile::ReadInt32(void)
 *   0x0000000000201130  Caver::Image::SaveToPNGFile(std::string const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 36
 *   insn=0x00000000004D2DA0 string=0x00000000004D2DA4 "V"
 *   insn=0x00000000004D2DAC string=0x00000000004D2DB0 "C"
 *   insn=0x00000000004D2DBC string=0x00000000004D2DC0 "x"
 *   insn=0x00000000004D2DC0 string=0x00000000001FAFA0 "0'"
 *   insn=0x00000000004D2DC4 string=0x00000000004D2DC8 "H"
 *   insn=0x00000000004D2DF0 string=0x00000000004D2DF4 "t"
 *   insn=0x00000000004D2DF4 string=0x00000000004D2DF8 "u"
 *   insn=0x00000000004D2DFC string=0x00000000004D2E00 ")"
 *   insn=0x00000000004D2E00 string=0x00000000004D2E08 "("
 *   insn=0x00000000004D2E0C string=0x00000000004D2E1C "\t|"
 *   insn=0x00000000004D2E10 string=0x00000000004D2E14 "$"
 *   insn=0x00000000004D2E1C string=0x00000000004D2E20 "4}hR"
 *   insn=0x00000000004D2E20 string=0x00000000004D2E24 "hR"
 *   insn=0x00000000004D2E34 string=0x00000000001F8570 "0'"
 *   insn=0x00000000004D2E38 string=0x00000000004D2E3C "`"
 *   insn=0x00000000004D2E3C string=0x00000000004D2E40 "h"
 *   insn=0x00000000004D2E44 string=0x00000000004D2E48 "F"
 *   insn=0x00000000004D2E48 string=0x00000000004D2E4C "h"
 *   insn=0x00000000004D2E48 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000004D2E4C string=0x00000000004D2E50 "t"
 *   insn=0x00000000004D2E60 string=0x00000000004D2E64 "h"
 *   insn=0x00000000004D2E60 string=0x00000000001FC4D0 "0'"
 *   insn=0x00000000004D2E70 string=0x00000000004D2E74 "(!"
 *   insn=0x00000000004D2E80 string=0x00000000004D2E84 "h"
 *   insn=0x00000000004D2E84 string=0x00000000004D2E88 "`"
 *   insn=0x00000000004D2E8C string=0x00000000004D2E90 ""
 *   insn=0x00000000004D2E98 string=0x00000000001F9610 "0'"
 *   insn=0x00000000004D2E9C string=0x00000000004D2EA0 "t"
 *   insn=0x00000000004D2EA4 string=0x00000000004D2EA8 ">"
 *   insn=0x00000000004D2EA8 string=0x00000000001F8FA0 "0'"
 *   insn=0x00000000004D2ED4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004D2EE4 string=0x00000000004D2EE8 "."
 *   insn=0x00000000004D2EEC string=0x00000000004D2EF0 "u"
 *   insn=0x00000000004D2EF4 string=0x00000000004D2EF8 "_"
 *   insn=0x00000000004D2EFC string=0x00000000004D2F00 "_"
 *   insn=0x00000000004D2F10 string=0x00000000001F5180 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Image::LoadFromTEXFile(__int64 a1)
{
  int Int32; // w21
  int v3; // w20
  int v4; // w0
  int v5; // w8
  unsigned int v6; // w20
  int v7; // w20
  unsigned __int64 v8; // x0
  unsigned __int8 *v9; // x8
  void *v10; // x0
  int v11; // w2
  unsigned int v12; // w8
  _QWORD v14[4]; // [xsp+0h] [xbp-40h] BYREF

  v14[3] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::BinaryFile::BinaryFile();
  if ( v14[1] )
  {
    Int32 = Caver::BinaryFile::ReadInt32((Caver::BinaryFile *)v14);
    v3 = Caver::BinaryFile::ReadInt32((Caver::BinaryFile *)v14);
    v4 = Caver::BinaryFile::ReadInt32((Caver::BinaryFile *)v14);
    *(_DWORD *)(a1 + 4) = v3;
    *(_DWORD *)(a1 + 8) = v4;
    *(_DWORD *)(a1 + 12) = Int32;
    if ( (unsigned int)(Int32 - 1) > 7 )
      v5 = 0;
    else
      v5 = dword_598170[Int32 - 1];
    v7 = v4 * v3 * v5;
    *(_DWORD *)(a1 + 16) = v5;
    *(_DWORD *)(a1 + 20) = v7;
    if ( v7 < 0LL )
      v8 = -1;
    else
      v8 = v7;
    v9 = (unsigned __int8 *)operator new[](v8);
    v10 = *(void **)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v9;
    if ( v10 )
    {
      operator delete[](v10);
      v9 = *(unsigned __int8 **)(a1 + 24);
      v7 = *(_DWORD *)(a1 + 20);
    }
    Caver::BinaryFile::ReadData((Caver::BinaryFile *)v14, v9, v7);
    v12 = *(_DWORD *)(a1 + 12);
    if ( v12 <= 5 && ((1 << v12) & 0x2C) != 0 )
      Caver::ConvertFromFileBuffer16(
        *(Caver **)(a1 + 24),
        (unsigned __int8 *)(unsigned int)(*(_DWORD *)(a1 + 20) / 2),
        v11);
    v6 = 1;
    *(_BYTE *)a1 = 1;
  }
  else
  {
    v6 = 0;
  }
  Caver::BinaryFile::~BinaryFile((Caver::BinaryFile *)v14);
  return v6;
}

