/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D2F1C
 * Mangled: _ZNK5Caver5Image13SaveToTEXFileERKSsb
 * Demangled: Caver::Image::SaveToTEXFile(std::string const&,bool)
 *
 * Callers: 1
 *   0x00000000001F5180  Caver::Image::SaveToTEXFile(std::string const&,bool)
 *
 * Callees: 12
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001F8FA0  Caver::BinaryFile::~BinaryFile()
 *   0x00000000001F9BB0  Caver::BinaryFile::WriteData(uchar const*,int)
 *   0x00000000001FAFA0  Caver::BinaryFile::BinaryFile(std::string const&,Caver::BinaryFile::Mode,bool)
 *   0x00000000001FD8F0  Caver::CopyToFileBuffer16(uchar *,uchar const*,int)
 *   0x00000000001FE440  .printf
 *   0x00000000001FF3D0  Caver::BinaryFile::WriteInt32(int)
 *   0x0000000000201760  .memcpy
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 27
 *   insn=0x00000000004D2F2C string=0x00000000004D2F30 "U"
 *   insn=0x00000000004D2F38 string=0x00000000004D2F3C "C"
 *   insn=0x00000000004D2F50 string=0x00000000001FAFA0 "0'"
 *   insn=0x00000000004D2F58 string=0x00000000004D2F5C "a"
 *   insn=0x00000000004D2F60 string=0x00000000004D2F64 ""
 *   insn=0x00000000004D2F64 string=0x00000000004D2F68 "a"
 *   insn=0x00000000004D2F70 string=0x00000000004D2F74 "a\n@"
 *   insn=0x00000000004D2F7C string=0x00000000004D2F80 "h"
 *   insn=0x00000000004D2F88 string=0x00000000004D3000 "a"
 *   insn=0x00000000004D2F8C string=0x00000000004D2F90 "(!"
 *   insn=0x00000000004D2F98 string=0x00000000004D2F9C " "
 *   insn=0x00000000004D2F9C string=0x00000000004D2FA0 "v"
 *   insn=0x00000000004D2FA8 string=0x00000000004D2FAC "q"
 *   insn=0x00000000004D2FAC string=0x00000000001F8570 "0'"
 *   insn=0x00000000004D2FB0 string=0x00000000004D2FB4 "a"
 *   insn=0x00000000004D2FC4 string=0x00000000004D2FC8 "J"
 *   insn=0x00000000004D2FC8 string=0x00000000004D2FCC "b"
 *   insn=0x00000000004D2FC8 string=0x00000000001FD8F0 "0'"
 *   insn=0x00000000004D2FD8 string=0x00000000001F9BB0 "0'"
 *   insn=0x00000000004D2FE0 string=0x00000000004D2FE4 ""
 *   insn=0x00000000004D2FE0 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000004D2FE8 string=0x00000000004D2FEC " "
 *   insn=0x00000000004D2FEC string=0x0000000000598148 "ERROR: Could not write to '%s'\n"
 *   insn=0x00000000004D3000 string=0x00000000004D3004 "b"
 *   insn=0x00000000004D3018 string=0x00000000001F8FA0 "0'"
 *   insn=0x00000000004D3044 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004D3070 string=0x00000000004D3074 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Image::SaveToTEXFile(__int64 a1, const char **a2)
{
  unsigned int v4; // w8
  __int64 v5; // x22
  unsigned __int64 v6; // x0
  Caver *v7; // x0
  int v8; // w3
  unsigned __int8 *v9; // x20
  int v10; // w8
  unsigned int v11; // w19
  _QWORD v13[4]; // [xsp+0h] [xbp-40h] BYREF

  v13[3] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::BinaryFile::BinaryFile();
  if ( v13[1] )
  {
    Caver::BinaryFile::WriteInt32((Caver::BinaryFile *)v13, *(_DWORD *)(a1 + 12));
    Caver::BinaryFile::WriteInt32((Caver::BinaryFile *)v13, *(_DWORD *)(a1 + 4));
    Caver::BinaryFile::WriteInt32((Caver::BinaryFile *)v13, *(_DWORD *)(a1 + 8));
    v4 = *(_DWORD *)(a1 + 12);
    if ( v4 <= 5 && ((1 << v4) & 0x2C) != 0 )
    {
      v5 = *(int *)(a1 + 20);
      if ( v5 < 0 )
        v6 = -1;
      else
        v6 = *(int *)(a1 + 20);
      v7 = (Caver *)operator new[](v6);
      v9 = (unsigned __int8 *)v7;
      if ( (int)v5 >= 0 )
        v10 = v5;
      else
        v10 = v5 + 1;
      Caver::CopyToFileBuffer16(
        v7,
        *(unsigned __int8 **)(a1 + 24),
        (const unsigned __int8 *)(unsigned int)(v10 >> 1),
        v8);
      Caver::BinaryFile::WriteData((Caver::BinaryFile *)v13, v9, *(_DWORD *)(a1 + 20));
      operator delete[](v9);
    }
    else
    {
      Caver::BinaryFile::WriteData((Caver::BinaryFile *)v13, *(const unsigned __int8 **)(a1 + 24), *(_DWORD *)(a1 + 20));
    }
    v11 = 1;
  }
  else
  {
    printf("ERROR: Could not write to '%s'\n", *a2);
    v11 = 0;
  }
  Caver::BinaryFile::~BinaryFile((Caver::BinaryFile *)v13);
  return v11;
}

