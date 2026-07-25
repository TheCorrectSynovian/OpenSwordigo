/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C1D0C
 * Mangled: _ZN5Caver18WaterMeshComponentC2Ev
 * Demangled: Caver::WaterMeshComponent::WaterMeshComponent(void)
 *
 * Callers: 2
 *   0x00000000001F5E50  Caver::WaterMeshComponent::WaterMeshComponent(void)
 *   0x00000000001FD360  Caver::WaterMeshComponent::WaterMeshComponent(void)
 *
 * Callees: 11
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6CE0  Caver::Component::BindOutlet(int,std::string const&,Caver::ComponentOutletBase *,bool)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FF8B0  Caver::VertexArrayObject::VertexArrayObject(void)
 *   0x0000000000200560  Caver::VertexArrayObject::~VertexArrayObject()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 102
 *   insn=0x00000000002C1D28 string=0x00000000002C1D2C "Z"
 *   insn=0x00000000002C1D2C string=0x00000000002C1D30 ";!"
 *   insn=0x00000000002C1D30 string=0x00000000002C1D34 "\t!"
 *   insn=0x00000000002C1D34 string=0x00000000002C1D38 "{"
 *   insn=0x00000000002C1D38 string=0x00000000002C1D3C ")YD"
 *   insn=0x00000000002C1D3C string=0x00000000002C1D40 "J"
 *   insn=0x00000000002C1D40 string=0x00000000002C1D44 "7!"
 *   insn=0x00000000002C1D50 string=0x00000000002C1D54 "jc"
 *   insn=0x00000000002C1D54 string=0x00000000002C1D58 "j"
 *   insn=0x00000000002C1D5C string=0x00000000002C1D60 "9?D"
 *   insn=0x00000000002C1D64 string=0x00000000002C1D68 "+"
 *   insn=0x00000000002C1D68 string=0x00000000002C1D6C "`"
 *   insn=0x00000000002C1D6C string=0x00000000002C1D70 "+"
 *   insn=0x00000000002C1D84 string=0x00000000002C1D88 "`"
 *   insn=0x00000000002C1D88 string=0x00000000002C1D8C ")A"
 *   insn=0x00000000002C1D8C string=0x00000000002C1D90 "h"
 *   insn=0x00000000002C1D98 string=0x00000000002C1D9C "i"
 *   insn=0x00000000002C1DA0 string=0x00000000002C1DA4 "`"
 *   insn=0x00000000002C1DB0 string=0x00000000002C1DB4 "(C"
 *   insn=0x00000000002C1DE8 string=0x00000000002C1DEC "h"
 *   insn=0x00000000002C1DEC string=0x00000000002C1DF0 "i2"
 *   insn=0x00000000002C1E00 string=0x00000000002C1E04 "?"
 *   insn=0x00000000002C1E08 string=0x00000000002C1E0C "A"
 *   insn=0x00000000002C1E0C string=0x0000000000589FE8 "boundsShape"
 *   insn=0x00000000002C1E18 string=0x00000000002C1E1C "g"
 *   insn=0x00000000002C1E34 string=0x00000000001F6CE0 "0'"
 *   insn=0x00000000002C1E44 string=0x00000000002C1E48 "A"
 *   insn=0x00000000002C1E44 string=0x00000000002C1EC0 "\t!"
 *   insn=0x00000000002C1E48 string=0x0000000000589978 "textureMapping"
 *   insn=0x00000000002C1E54 string=0x00000000002C1E58 "X"
 *   insn=0x00000000002C1E7C string=0x00000000002C1E80 "!"
 *   insn=0x00000000002C1E80 string=0x00000000002C1E84 ""
 *   insn=0x00000000002C1E80 string=0x00000000002C1EE4 "\t!"
 *   insn=0x00000000002C1E88 string=0x00000000002C1E8C "`"
 *   insn=0x00000000002C1E8C string=0x00000000002C1E90 "H"
 *   insn=0x00000000002C1E98 string=0x00000000002C1E9C "a"
 *   insn=0x00000000002C1EC0 string=0x00000000002C1EC4 ")=G"
 *   insn=0x00000000002C1EC4 string=0x00000000002C1EC8 "!"
 *   insn=0x00000000002C1ECC string=0x00000000002C1ED0 "\t"
 *   insn=0x00000000002C1ECC string=0x00000000002C1F08 "\t"
 *   insn=0x00000000002C1ED0 string=0x00000000002C1ED4 "*"
 *   insn=0x00000000002C1ED4 string=0x00000000002C1ED8 "\n"
 *   insn=0x00000000002C1EDC string=0x00000000002C1EE0 ""
 *   insn=0x00000000002C1EE0 string=0x00000000002C1F14 "?"
 *   insn=0x00000000002C1EE4 string=0x00000000002C1EE8 ")=G"
 *   insn=0x00000000002C1EE8 string=0x00000000002C1EEC "!"
 *   insn=0x00000000002C1EF0 string=0x00000000002C1EF4 "\t"
 *   insn=0x00000000002C1EF0 string=0x00000000002C1F28 "\t"
 *   insn=0x00000000002C1EF4 string=0x00000000002C1EF8 "*"
 *   insn=0x00000000002C1EF8 string=0x00000000002C1EFC "\n"
 *   insn=0x00000000002C1F04 string=0x00000000002C1F34 "?"
 *   insn=0x00000000002C1F08 string=0x00000000002C1F0C "*"
 *   insn=0x00000000002C1F0C string=0x00000000002C1F10 "\n"
 *   insn=0x00000000002C1F1C string=0x00000000002C1F20 "!"
 *   insn=0x00000000002C1F28 string=0x00000000002C1F2C "*"
 *   insn=0x00000000002C1F2C string=0x00000000002C1F30 "\n"
 *   insn=0x00000000002C1F34 string=0x00000000002C1F38 "l"
 *   insn=0x00000000002C1F48 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002C1F50 string=0x00000000002C1F54 "(a"
 *   insn=0x00000000002C1F5C string=0x00000000002C1F60 "\n!"
 *   insn=0x00000000002C1F60 string=0x00000000002C1F64 "J=G"
 *   insn=0x00000000002C1F64 string=0x00000000002C1F68 ")!"
 *   insn=0x00000000002C1F68 string=0x00000000002C1F6C "J"
 *   insn=0x00000000002C1F6C string=0x00000000002C1F70 "*"
 *   insn=0x00000000002C1F6C string=0x00000000002C1FD4 "*"
 *   insn=0x00000000002C1F70 string=0x00000000002C1F74 "K"
 *   insn=0x00000000002C1F74 string=0x00000000002C1F78 "+"
 *   insn=0x00000000002C1F80 string=0x00000000002C1FBC "_"
 *   insn=0x00000000002C1F8C string=0x00000000002C1F90 "(a"
 *   insn=0x00000000002C1F98 string=0x00000000002C1F9C "\n!"
 *   insn=0x00000000002C1F9C string=0x00000000002C1FA0 "J=G"
 *   insn=0x00000000002C1FA0 string=0x00000000002C1FA4 ")!"
 *   insn=0x00000000002C1FA4 string=0x00000000002C1FA8 "j"
 *   insn=0x00000000002C1FA8 string=0x00000000002C1FAC "*"
 *   insn=0x00000000002C1FAC string=0x00000000002C1FB0 "K"
 *   insn=0x00000000002C1FB0 string=0x00000000002C1FB4 "+"
 *   insn=0x00000000002C1FCC string=0x00000000002C1FD0 ""
 *   insn=0x00000000002C1FD4 string=0x00000000002C1FD8 "K"
 *   insn=0x00000000002C1FD8 string=0x00000000002C1FDC "+"
 *   insn=0x00000000002C1FDC string=0x00000000002C1FE0 "_"
 *   insn=0x00000000002C1FE0 string=0x00000000002C1FE4 ""
 *   insn=0x00000000002C1FF0 string=0x00000000002C1FF4 "["
 *   insn=0x00000000002C1FF8 string=0x00000000002C2000 "`V@"
 *   insn=0x00000000002C2000 string=0x00000000002C2004 "(C"
 *   insn=0x00000000002C2004 string=0x00000000002C2008 "hN"
 *   insn=0x00000000002C200C string=0x00000000002C2010 "@"
 *   insn=0x00000000002C2010 string=0x00000000002C2014 ""
 *   insn=0x00000000002C2014 string=0x00000000002C2018 ""
 *   insn=0x00000000002C201C string=0x00000000002C2020 ""
 *   insn=0x00000000002C2020 string=0x00000000002C2024 ""
 *   insn=0x00000000002C2038 string=0x00000000002C203C "@"
 *   insn=0x00000000002C203C string=0x00000000002C2040 ""
 *   insn=0x00000000002C2040 string=0x00000000002C2044 ""
 *   insn=0x00000000002C2048 string=0x00000000002C204C ""
 *   insn=0x00000000002C204C string=0x00000000002C2050 ""
 *   insn=0x00000000002C205C string=0x00000000001FA4D0 "0'"
 *   insn=0x00000000002C2078 string=0x00000000002C207C "h"@"
 *   insn=0x00000000002C2080 string=0x00000000002C2084 "a"
 *   insn=0x00000000002C2090 string=0x00000000002C2094 "hz@"
 *   insn=0x00000000002C2098 string=0x00000000002C209C "h"
 *   insn=0x00000000002C20A0 string=0x00000000002C20A4 "`."
 *   insn=0x00000000002C20A8 string=0x00000000002C20AC "`2"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::WaterMeshComponent::WaterMeshComponent(Caver::WaterMeshComponent *this)
{
  __int128 v2; // q0
  void *v8; // x0
  void *v9; // x0
  long double result; // q0
  unsigned int *v11; // x8
  int v12; // w9
  unsigned int *v13; // x8
  int v14; // w9
  _QWORD v15[3]; // [xsp+28h] [xbp-68h] BYREF

  v15[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *(_QWORD *)&v2 = &off_6C5038;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_BYTE *)this + 48) = 0;
  *((_QWORD *)this + 9) = 0;
  *((_QWORD *)&v2 + 1) = &off_6C5078;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *(_QWORD *)this = off_6C4F20;
  *((_OWORD *)this + 1) = v2;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 14) = &off_6BEDF8;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 16) = 0;
  *((_QWORD *)this + 17) = 0;
  *((_QWORD *)this + 18) = 0;
  *((_QWORD *)this + 19) = off_6C3CD8;
  __asm { FMOV            V0.4S, #1.0 }
  *((_DWORD *)this + 40) = 0;
  *((_QWORD *)this + 21) = 0;
  *((_OWORD *)this + 11) = _Q0;
  *((_OWORD *)this + 12) = _Q0;
  *((_OWORD *)this + 13) = _Q0;
  Caver::VertexArrayObject::VertexArrayObject((Caver::WaterMeshComponent *)((char *)this + 224));
  *((_BYTE *)this + 296) = 0;
  *((_QWORD *)this + 38) = 0;
  *((_QWORD *)this + 39) = 0;
  *((_BYTE *)this + 320) = 0;
  *((_DWORD *)this + 85) = 0;
  *(_QWORD *)((char *)this + 332) = 0;
  *(_QWORD *)((char *)this + 324) = 0;
  sub_566BB8((int)v15, "boundsShape");
  Caver::Component::BindOutlet();
  v8 = (void *)(v15[0] - 24LL);
  if ( (__int64 *)(v15[0] - 24LL) != &qword_6FD2E0 )
  {
    v11 = (unsigned int *)(v15[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v12 = __ldaxr(v11);
      while ( __stlxr(v12 - 1, v11) );
    }
    else
    {
      v12 = (*v11)--;
    }
    if ( v12 <= 0 )
      operator delete(v8);
  }
  sub_566BB8((int)v15, "textureMapping");
  Caver::Component::BindOutlet();
  v9 = (void *)(v15[0] - 24LL);
  if ( (__int64 *)(v15[0] - 24LL) != &qword_6FD2E0 )
  {
    v13 = (unsigned int *)(v15[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v14 = __ldaxr(v13);
      while ( __stlxr(v14 - 1, v13) );
    }
    else
    {
      v14 = (*v13)--;
    }
    if ( v14 <= 0 )
      operator delete(v9);
  }
  result = *(long double *)&xmmword_5847D0;
  *(_OWORD *)((char *)this + 136) = xmmword_5847D0;
  return result;
}

