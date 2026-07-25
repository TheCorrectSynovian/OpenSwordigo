/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FCE78
 * Mangled: _ZN5Caver5Proto13ObjectLibraryD2Ev
 * Demangled: Caver::Proto::ObjectLibrary::~ObjectLibrary()
 *
 * Callers: 3
 *   0x00000000001F4480  Caver::Proto::ObjectLibrary::~ObjectLibrary()
 *   0x00000000001FB3C0  Caver::Proto::ObjectLibrary::~ObjectLibrary()
 *   0x00000000002FC9D4  Caver::Proto::ObjectLibrary::ObjectLibrary(Caver::Proto::ObjectLibrary const&)
 *
 * Callees: 9
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6CB0  google::protobuf::internal::StringTypeHandlerBase::Delete(std::string *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 133
 *   insn=0x00000000002FCE88 string=0x00000000002FCE8C "U"
 *   insn=0x00000000002FCE94 string=0x00000000002FCE98 "I"
 *   insn=0x00000000002FCE9C string=0x00000000002FCEA0 "H"
 *   insn=0x00000000002FCEA0 string=0x00000000002FCEA4 "t\n@"
 *   insn=0x00000000002FCEA4 string=0x00000000002FCEA8 "eG"
 *   insn=0x00000000002FCEA8 string=0x00000000002FCEAC ")"
 *   insn=0x00000000002FCEAC string=0x00000000002FCEB0 "A"
 *   insn=0x00000000002FCEB4 string=0x00000000002FCEB8 "h"
 *   insn=0x00000000002FCEB8 string=0x00000000002FCEBC "@"
 *   insn=0x00000000002FCEBC string=0x00000000002FCEC0 "4"
 *   insn=0x00000000002FCEBC string=0x00000000002FCEE4 "i"
 *   insn=0x00000000002FCEC4 string=0x00000000002FCEC8 "I"
 *   insn=0x00000000002FCEC8 string=0x00000000002FCECC ")"
 *   insn=0x00000000002FCED8 string=0x00000000002FD050 ")"
 *   insn=0x00000000002FCEE0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002FCEE4 string=0x00000000002FCEE8 "`b@"
 *   insn=0x00000000002FCEE8 string=0x00000000002FCEEC "?"
 *   insn=0x00000000002FCEF0 string=0x00000000002FCF24 "hb"
 *   insn=0x00000000002FCEF4 string=0x00000000002FCEF8 "xt"
 *   insn=0x00000000002FCEFC string=0x00000000002FCF00 "\t"
 *   insn=0x00000000002FCF00 string=0x00000000002FCF04 ")"
 *   insn=0x00000000002FCF08 string=0x00000000002FCF0C " "
 *   insn=0x00000000002FCF0C string=0x00000000002FCF10 "i"
 *   insn=0x00000000002FCF10 string=0x00000000002FCF14 "`b@"
 *   insn=0x00000000002FCF28 string=0x00000000002FCF2C "`"
 *   insn=0x00000000002FCF2C string=0x00000000002FCF30 "@"
 *   insn=0x00000000002FCF2C string=0x00000000002FCF38 "i"
 *   insn=0x00000000002FCF30 string=0x00000000002FCF34 ""
 *   insn=0x00000000002FCF34 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000002FCF38 string=0x00000000002FCF3C "`F@"
 *   insn=0x00000000002FCF3C string=0x00000000002FCF40 "?"
 *   insn=0x00000000002FCF44 string=0x00000000002FCF78 "h"
 *   insn=0x00000000002FCF48 string=0x00000000002FCF4C "xt"
 *   insn=0x00000000002FCF50 string=0x00000000002FCF54 "\t"
 *   insn=0x00000000002FCF54 string=0x00000000002FCF58 ")"
 *   insn=0x00000000002FCF5C string=0x00000000002FCF60 " "
 *   insn=0x00000000002FCF60 string=0x00000000002FCF64 "i"
 *   insn=0x00000000002FCF64 string=0x00000000002FCF68 "`F@"
 *   insn=0x00000000002FCF7C string=0x00000000002FCF80 "`"
 *   insn=0x00000000002FCF80 string=0x00000000002FCF84 "@"
 *   insn=0x00000000002FCF80 string=0x00000000002FCF8C "h^@"
 *   insn=0x00000000002FCF8C string=0x00000000002FCF90 "`*@"
 *   insn=0x00000000002FCF94 string=0x00000000002FCF98 "+"
 *   insn=0x00000000002FCF98 string=0x00000000002FCFBC "h"
 *   insn=0x00000000002FCFA0 string=0x00000000002FCFA4 "C"
 *   insn=0x00000000002FCFA4 string=0x00000000002FCFA8 "h^"
 *   insn=0x00000000002FCFA4 string=0x00000000001F6CB0 "0'"
 *   insn=0x00000000002FCFA8 string=0x00000000002FCFAC "`*@"
 *   insn=0x00000000002FCFB4 string=0x00000000002FCFB8 "K"
 *   insn=0x00000000002FCFC0 string=0x00000000002FCFC4 "`"
 *   insn=0x00000000002FCFC4 string=0x00000000002FCFC8 "@"
 *   insn=0x00000000002FCFC4 string=0x00000000002FCFD0 "i&@"
 *   insn=0x00000000002FCFD0 string=0x00000000002FCFD4 "`"
 *   insn=0x00000000002FCFD4 string=0x00000000002FCFD8 "?"
 *   insn=0x00000000002FCFDC string=0x00000000002FD010 "h"
 *   insn=0x00000000002FCFE0 string=0x00000000002FCFE4 "xt"
 *   insn=0x00000000002FCFE8 string=0x00000000002FCFEC "\t"
 *   insn=0x00000000002FCFEC string=0x00000000002FCFF0 ")"
 *   insn=0x00000000002FCFF4 string=0x00000000002FCFF8 " "
 *   insn=0x00000000002FCFF8 string=0x00000000002FCFFC "i&@"
 *   insn=0x00000000002FCFFC string=0x00000000002FD000 "`"
 *   insn=0x00000000002FD014 string=0x00000000002FD018 "`"
 *   insn=0x00000000002FD018 string=0x00000000002FD01C "@"
 *   insn=0x00000000002FD024 string=0x00000000002FD028 "v"
 *   insn=0x00000000002FD028 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002FD050 string=0x00000000002FD054 ")=G"
 *   insn=0x00000000002FD054 string=0x00000000002FD058 "!"
 *   insn=0x00000000002FD05C string=0x00000000002FD060 "\t"
 *   insn=0x00000000002FD05C string=0x00000000002FD074 "\t"
 *   insn=0x00000000002FD060 string=0x00000000002FD064 "*"
 *   insn=0x00000000002FD064 string=0x00000000002FD068 "\n"
 *   insn=0x00000000002FD070 string=0x00000000002FD080 "?"
 *   insn=0x00000000002FD074 string=0x00000000002FD078 "*"
 *   insn=0x00000000002FD078 string=0x00000000002FD07C "\n"
 *   insn=0x00000000002FD094 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002FD09C string=0x00000000002FD0A0 "X"
 *   insn=0x00000000002FD0A4 string=0x00000000002FD0A8 ""
 *   insn=0x00000000002FD0B0 string=0x00000000002FD0B4 "*"
 *   insn=0x00000000002FD0B4 string=0x00000000002FD15C "i&@"
 *   insn=0x00000000002FD0BC string=0x00000000002FD118 "h^@"
 *   insn=0x00000000002FD0C0 string=0x00000000002FD0C4 "hF@"
 *   insn=0x00000000002FD0C8 string=0x00000000002FD0CC "?"
 *   insn=0x00000000002FD0D0 string=0x00000000002FD100 "i"
 *   insn=0x00000000002FD0DC string=0x00000000002FD0E0 ""
 *   insn=0x00000000002FD0E0 string=0x00000000002FD0E4 ""
 *   insn=0x00000000002FD0E8 string=0x00000000002FD0EC "i"
 *   insn=0x00000000002FD0EC string=0x00000000002FD0F0 "hF@"
 *   insn=0x00000000002FD108 string=0x00000000002FD10C "h"
 *   insn=0x00000000002FD118 string=0x00000000002FD11C "`*@"
 *   insn=0x00000000002FD120 string=0x00000000002FD124 "+"
 *   insn=0x00000000002FD124 string=0x00000000002FD148 "h"
 *   insn=0x00000000002FD130 string=0x00000000002FD134 "h^"
 *   insn=0x00000000002FD134 string=0x00000000002FD138 "`*@"
 *   insn=0x00000000002FD140 string=0x00000000002FD144 "K"
 *   insn=0x00000000002FD14C string=0x00000000002FD150 "`"
 *   insn=0x00000000002FD150 string=0x00000000002FD154 "@"
 *   insn=0x00000000002FD15C string=0x00000000002FD160 "`"
 *   insn=0x00000000002FD160 string=0x00000000002FD164 "?"
 *   insn=0x00000000002FD168 string=0x00000000002FD19C "h"
 *   insn=0x00000000002FD16C string=0x00000000002FD170 "xu"
 *   insn=0x00000000002FD174 string=0x00000000002FD178 "\t"
 *   insn=0x00000000002FD178 string=0x00000000002FD17C ")"
 *   insn=0x00000000002FD180 string=0x00000000002FD184 " "
 *   insn=0x00000000002FD184 string=0x00000000002FD188 "i&@"
 *   insn=0x00000000002FD188 string=0x00000000002FD18C "`"
 *   insn=0x00000000002FD1A8 string=0x00000000002FD1AC "m"
 *   insn=0x00000000002FD1B4 string=0x00000000002FD1B8 "eD"
 *   insn=0x00000000002FD1B8 string=0x00000000002FD1BC "dD"
 *   insn=0x00000000002FD1CC string=0x00000000002FD1D0 "S"
 *   insn=0x00000000002FD1D0 string=0x00000000002FD1D4 "h"
 *   insn=0x00000000002FD1D8 string=0x00000000002FD1DC "H"
 *   insn=0x00000000002FD1E0 string=0x00000000002FD1E4 ""
 *   insn=0x00000000002FD1E8 string=0x00000000002FD1EC " "
 *   insn=0x00000000002FD1EC string=0x00000000002FD210 "h"
 *   insn=0x00000000002FD1F0 string=0x00000000002FD1F4 "\t"
 *   insn=0x00000000002FD1F4 string=0x00000000002FD1F8 "J"
 *   insn=0x00000000002FD1F8 string=0x00000000002FD1FC "J"
 *   insn=0x00000000002FD1FC string=0x00000000002FD200 "(a"
 *   insn=0x00000000002FD204 string=0x00000000002FD208 "A"
 *   insn=0x00000000002FD208 string=0x00000000002FD20C ")"
 *   insn=0x00000000002FD208 string=0x00000000002FD230 "*"
 *   insn=0x00000000002FD218 string=0x00000000002FD21C "!"
 *   insn=0x00000000002FD230 string=0x00000000002FD234 "J=G"
 *   insn=0x00000000002FD234 string=0x00000000002FD238 ")!"
 *   insn=0x00000000002FD23C string=0x00000000002FD240 "*"
 *   insn=0x00000000002FD23C string=0x00000000002FD254 "*"
 *   insn=0x00000000002FD240 string=0x00000000002FD244 "K"
 *   insn=0x00000000002FD244 string=0x00000000002FD248 "+"
 *   insn=0x00000000002FD250 string=0x00000000002FD260 "_"
 *   insn=0x00000000002FD254 string=0x00000000002FD258 "K"
 *   insn=0x00000000002FD258 string=0x00000000002FD25C "+"
 *   insn=0x00000000002FD260 string=0x00000000002FD264 "L"
 *   insn=0x00000000002FD270 string=0x00000000002FD274 "L"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ObjectLibrary::~ObjectLibrary(Caver::Proto::ObjectLibrary *this)
{
  __int64 *v2; // x20
  __int64 *v3; // x0
  int v4; // w9
  _QWORD *v5; // x0
  __int64 i; // x20
  __int64 v7; // x8
  int v8; // w9
  _QWORD *v9; // x0
  __int64 j; // x20
  __int64 v11; // x8
  char *v12; // x0
  __int64 v13; // x20
  int v14; // w9
  _QWORD *v15; // x0
  __int64 k; // x20
  __int64 v17; // x8
  unsigned int *v18; // x8
  int v19; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = (__int64 *)*((_QWORD *)this + 2);
  *(_QWORD *)this = off_6C7380;
  if ( v2 != &Caver::Proto::ObjectLibrary::_default_name_ && v2 )
  {
    v3 = (__int64 *)(*v2 - 24);
    if ( v3 != &qword_6FD2E0 )
    {
      v18 = (unsigned int *)(*v2 - 8);
      if ( &pthread_create )
      {
        do
          v19 = __ldaxr(v18);
        while ( __stlxr(v19 - 1, v18) );
      }
      else
      {
        v19 = (*v18)--;
      }
      if ( v19 <= 0 )
        operator delete(v3);
    }
    operator delete(v2);
  }
  v4 = *((_DWORD *)this + 51);
  v5 = (_QWORD *)*((_QWORD *)this + 24);
  if ( v4 >= 1 )
  {
    for ( i = 0; i < v4; ++i )
    {
      v7 = v5[i];
      if ( v7 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 8LL))(v5[i]);
        v4 = *((_DWORD *)this + 51);
        v5 = (_QWORD *)*((_QWORD *)this + 24);
      }
    }
  }
  if ( v5 != (_QWORD *)((char *)this + 216) && v5 )
    operator delete[](v5);
  v8 = *((_DWORD *)this + 37);
  v9 = (_QWORD *)*((_QWORD *)this + 17);
  if ( v8 >= 1 )
  {
    for ( j = 0; j < v8; ++j )
    {
      v11 = v9[j];
      if ( v11 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 8LL))(v9[j]);
        v8 = *((_DWORD *)this + 37);
        v9 = (_QWORD *)*((_QWORD *)this + 17);
      }
    }
  }
  if ( v9 != (_QWORD *)((char *)this + 160) && v9 )
    operator delete[](v9);
  v12 = (char *)*((_QWORD *)this + 10);
  if ( *((int *)this + 23) >= 1 )
  {
    v13 = 0;
    do
    {
      google::protobuf::internal::StringTypeHandlerBase::Delete();
      v12 = (char *)*((_QWORD *)this + 10);
      ++v13;
    }
    while ( v13 < *((int *)this + 23) );
  }
  if ( v12 != (char *)this + 104 && v12 )
    operator delete[](v12);
  v14 = *((_DWORD *)this + 9);
  v15 = (_QWORD *)*((_QWORD *)this + 3);
  if ( v14 >= 1 )
  {
    for ( k = 0; k < v14; ++k )
    {
      v17 = v15[k];
      if ( v17 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17 + 8LL))(v15[k]);
        v14 = *((_DWORD *)this + 9);
        v15 = (_QWORD *)*((_QWORD *)this + 3);
      }
    }
  }
  if ( v15 != (_QWORD *)((char *)this + 48) && v15 )
    operator delete[](v15);
  google::protobuf::MessageLite::~MessageLite(this);
}

