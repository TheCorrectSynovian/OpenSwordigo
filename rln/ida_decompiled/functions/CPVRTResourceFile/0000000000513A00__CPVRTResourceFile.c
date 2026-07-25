/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000513A00
 * Mangled: _ZN17CPVRTResourceFileC2EPKc
 * Demangled: CPVRTResourceFile::CPVRTResourceFile(char const*)
 *
 * Callers: 1
 *   0x00000000001F8C70  CPVRTResourceFile::CPVRTResourceFile(char const*)
 *
 * Callees: 15
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F5B40  .fread
 *   0x00000000001F5F40  .fseek
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7960  CPVRTString::c_str(void)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FA120  .strcmp
 *   0x00000000001FC310  .ftell
 *   0x00000000001FC7E0  CPVRTString::~CPVRTString()
 *   0x00000000001FCED0  CPVRTString::CPVRTString(CPVRTString const&,ulong,ulong)
 *   0x00000000001FDDC0  .fclose
 *   0x00000000001FF7D0  CPVRTString::operator+=(char const*)
 *   0x0000000000201180  .fopen
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 55
 *   insn=0x0000000000513A1C string=0x0000000000513A20 "X"
 *   insn=0x0000000000513A20 string=0x0000000000513A24 "ID"
 *   insn=0x0000000000513A28 string=0x0000000000513A2C "\t"
 *   insn=0x0000000000513A2C string=0x0000000000513A30 "J5A"
 *   insn=0x0000000000513A38 string=0x0000000000513A3C "A"
 *   insn=0x0000000000513A40 string=0x0000000000513A44 "C"
 *   insn=0x0000000000513A48 string=0x0000000000513A4C "h"
 *   insn=0x0000000000513A50 string=0x0000000000513A54 "?"
 *   insn=0x0000000000513A5C string=0x0000000000513A60 "!"
 *   insn=0x0000000000513A6C string=0x00000000001FCED0 "0'"
 *   insn=0x0000000000513A74 string=0x0000000000513A78 "V"
 *   insn=0x0000000000513A80 string=0x00000000001F7960 "0'"
 *   insn=0x0000000000513A84 string=0x00000000005969E5 "rb"
 *   insn=0x0000000000513A90 string=0x0000000000513A94 "U"
 *   insn=0x0000000000513A94 string=0x0000000000513B1C "h"@9"
 *   insn=0x0000000000513AA0 string=0x0000000000513AA4 "'"
 *   insn=0x0000000000513AA4 string=0x00000000001F5F40 "P'"
 *   insn=0x0000000000513AAC string=0x0000000000513AB0 " "
 *   insn=0x0000000000513AAC string=0x00000000001FC310 "0'"
 *   insn=0x0000000000513ABC string=0x0000000000513AC0 " "
 *   insn=0x0000000000513AC0 string=0x0000000000513AC4 "7"
 *   insn=0x0000000000513ACC string=0x00000000001F8570 "0'"
 *   insn=0x0000000000513AEC string=0x0000000000513AF0 "("
 *   insn=0x0000000000513AEC string=0x00000000001F5B40 "P'"
 *   insn=0x0000000000513AF8 string=0x0000000000513AFC "v"
 *   insn=0x0000000000513AFC string=0x0000000000513B00 "z""
 *   insn=0x0000000000513B0C string=0x0000000000513B10 "?"
 *   insn=0x0000000000513B0C string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000513B18 string=0x00000000001FDDC0 "0'"
 *   insn=0x0000000000513B24 string=0x0000000000513B28 "=G"
 *   insn=0x0000000000513B38 string=0x0000000000513B3C ""
 *   insn=0x0000000000513B40 string=0x0000000000513B44 ""
 *   insn=0x0000000000513B50 string=0x0000000000513B54 "s"
 *   insn=0x0000000000513B54 string=0x00000000001FA120 "0'"
 *   insn=0x0000000000513B64 string=0x0000000000513B68 "+"
 *   insn=0x0000000000513B70 string=0x0000000000513B88 "h&"
 *   insn=0x0000000000513B74 string=0x0000000000513B78 "h"
 *   insn=0x0000000000513B7C string=0x0000000000513B80 "h\n"
 *   insn=0x0000000000513B88 string=0x0000000000513B8C "h""
 *   insn=0x0000000000513B94 string=0x0000000000513B98 ""
 *   insn=0x0000000000513B94 string=0x00000000001FC7E0 "0'"
 *   insn=0x0000000000513BC4 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000513BDC string=0x0000000000513BE0 "9"
 *   insn=0x0000000000513C00 string=0x0000000000513C04 "=G"
 *   insn=0x0000000000513C30 string=0x0000000000513C34 " kv"
 *   insn=0x0000000000513C38 string=0x0000000000513C3C "9"
 *   insn=0x0000000000513C40 string=0x0000000000513C44 "Z"
 *   insn=0x0000000000513C44 string=0x0000000000513C48 "_"
 *   insn=0x0000000000513C4C string=0x0000000000513C50 "+"
 *   insn=0x0000000000513C54 string=0x0000000000513C58 ""
 *   insn=0x0000000000513C5C string=0x0000000000513C60 "("
 *   insn=0x0000000000513C60 string=0x0000000000513C64 ""
 *   insn=0x0000000000513C70 string=0x0000000000513C74 ""
 *   insn=0x0000000000513C74 string=0x0000000000513C78 "\t@"
 *   insn=0x0000000000513C78 string=0x0000000000513C7C "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall CPVRTResourceFile::CPVRTResourceFile(CPVRTResourceFile *this, char *a2)
{
  __int64 *v4; // x25
  const char *v5; // x0
  FILE *v6; // x0
  FILE *v7; // x21
  size_t v8; // x23
  _BYTE *v9; // x22
  __int64 v10; // x21
  __int64 v11; // x23
  _QWORD *v12; // x22
  char v13; // w8
  _BYTE v14[32]; // [xsp+58h] [xbp-68h] BYREF
  __int64 v15; // [xsp+78h] [xbp-48h]

  v15 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *(_QWORD *)this = off_6D8E08;
  *((_WORD *)this + 4) = 0;
  *((_QWORD *)this + 2) = 0;
  v4 = (__int64 *)((char *)this + 16);
  *((_QWORD *)this + 3) = 0;
  CPVRTString::CPVRTString(
    (CPVRTString *)v14,
    (const CPVRTString *)&CPVRTResourceFile::s_ReadPath,
    0,
    0xFFFFFFFFFFFFFFFFLL);
  CPVRTString::operator+=((int)v14, a2);
  v5 = (const char *)CPVRTString::c_str((CPVRTString *)v14);
  v6 = fopen(v5, "rb");
  v7 = v6;
  if ( v6 )
  {
    fseek(v6, 0, 2);
    *v4 = ftell(v7);
    fseek(v7, 0, 0);
    v8 = *v4;
    v9 = (_BYTE *)operator new[](*v4 + 1);
    v9[v8] = 0;
    if ( fread(v9, 1u, v8, v7) == *v4 )
    {
      *((_QWORD *)this + 3) = v9;
      *((_BYTE *)this + 8) = 1;
    }
    else
    {
      operator delete[](v9);
      *v4 = 0;
    }
    fclose(v7);
  }
  if ( !*((_BYTE *)this + 8) )
  {
    v10 = CPVRTMemoryFileSystem::s_i32NumFiles;
    if ( CPVRTMemoryFileSystem::s_i32NumFiles < 1 )
    {
LABEL_11:
      v13 = 0;
    }
    else
    {
      v11 = 0;
      v12 = (_QWORD *)(CPVRTMemoryFileSystem::s_pFileInfo + 16);
      while ( strcmp((const char *)*(v12 - 2), a2) )
      {
        ++v11;
        v12 += 4;
        if ( v11 >= v10 )
          goto LABEL_11;
      }
      *((_QWORD *)this + 3) = *(v12 - 1);
      *((_QWORD *)this + 2) = *v12;
      v13 = 1;
    }
    *((_BYTE *)this + 9) = v13;
    *((_BYTE *)this + 8) = v13;
  }
  CPVRTString::~CPVRTString((CPVRTString *)v14);
}

