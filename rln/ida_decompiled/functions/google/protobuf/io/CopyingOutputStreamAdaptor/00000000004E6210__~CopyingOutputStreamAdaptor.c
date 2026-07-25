/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E6210
 * Mangled: _ZN6google8protobuf2io26CopyingOutputStreamAdaptorD2Ev
 * Demangled: google::protobuf::io::CopyingOutputStreamAdaptor::~CopyingOutputStreamAdaptor()
 *
 * Callers: 1
 *   0x0000000000202550  google::protobuf::io::CopyingOutputStreamAdaptor::~CopyingOutputStreamAdaptor()
 *
 * Callees: 4
 *   0x00000000001F4BB0  google::protobuf::io::ZeroCopyOutputStream::~ZeroCopyOutputStream()
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 46
 *   insn=0x00000000004E6220 string=0x00000000004E6224 "hF@9)"
 *   insn=0x00000000004E6224 string=0x00000000004E6228 ")"
 *   insn=0x00000000004E6228 string=0x00000000004E622C ")A"
 *   insn=0x00000000004E622C string=0x00000000004E6230 "i"
 *   insn=0x00000000004E6234 string=0x00000000004E6238 "hB@9"
 *   insn=0x00000000004E6234 string=0x00000000004E6270 "b.@"
 *   insn=0x00000000004E623C string=0x00000000004E6240 "`"
 *   insn=0x00000000004E623C string=0x00000000004E6254 "`"
 *   insn=0x00000000004E6244 string=0x00000000004E6248 ""
 *   insn=0x00000000004E6248 string=0x00000000004E624C ""
 *   insn=0x00000000004E6254 string=0x00000000004E6258 "@"
 *   insn=0x00000000004E6258 string=0x00000000004E625C "A;"
 *   insn=0x00000000004E625C string=0x00000000001F4F60 "P'"
 *   insn=0x00000000004E6268 string=0x00000000004E626C "Q:"
 *   insn=0x00000000004E626C string=0x00000000001F4BB0 "P'"
 *   insn=0x00000000004E6270 string=0x00000000004E6274 """
 *   insn=0x00000000004E6274 string=0x00000000004E6278 "`"
 *   insn=0x00000000004E6278 string=0x00000000004E627C "a"
 *   insn=0x00000000004E627C string=0x00000000004E6280 ""
 *   insn=0x00000000004E6280 string=0x00000000004E6284 "\t@"
 *   insn=0x00000000004E6288 string=0x00000000004E628C " "
 *   insn=0x00000000004E628C string=0x00000000004E6290 "h."
 *   insn=0x00000000004E628C string=0x00000000004E62B0 "`"
 *   insn=0x00000000004E6290 string=0x00000000004E6294 "i"
 *   insn=0x00000000004E6298 string=0x00000000004E629C "("
 *   insn=0x00000000004E629C string=0x00000000004E62A0 "h"
 *   insn=0x00000000004E62A0 string=0x00000000004E62A4 "hB@9"
 *   insn=0x00000000004E62B4 string=0x00000000004E62B8 "hF"
 *   insn=0x00000000004E62C0 string=0x00000000004E62C4 "';"
 *   insn=0x00000000004E62C8 string=0x00000000004E62CC "hB@9"
 *   insn=0x00000000004E62DC string=0x00000000004E62E0 "h"
 *   insn=0x00000000004E62EC string=0x00000000004E62F0 "0:"
 *   insn=0x00000000004E62F4 string=0x00000000004E62F8 "sm"
 *   insn=0x00000000004E630C string=0x00000000004E6310 "hF@9"
 *   insn=0x00000000004E6314 string=0x00000000004E6328 "b.@"
 *   insn=0x00000000004E632C string=0x00000000004E6330 "`"
 *   insn=0x00000000004E6330 string=0x00000000004E6334 "a"
 *   insn=0x00000000004E6334 string=0x00000000004E6338 ""
 *   insn=0x00000000004E6338 string=0x00000000004E633C "\t@"
 *   insn=0x00000000004E6340 string=0x00000000004E6344 "@"
 *   insn=0x00000000004E6344 string=0x00000000004E6348 "h."
 *   insn=0x00000000004E6344 string=0x00000000004E636C "`"
 *   insn=0x00000000004E6348 string=0x00000000004E634C "i"
 *   insn=0x00000000004E6354 string=0x00000000004E6358 "("
 *   insn=0x00000000004E6358 string=0x00000000004E635C "h"
 *   insn=0x00000000004E6370 string=0x00000000004E6374 "hF"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::io::CopyingOutputStreamAdaptor::~CopyingOutputStreamAdaptor(
        google::protobuf::io::CopyingOutputStreamAdaptor *this)
{
  int v2; // w8
  __int64 v3; // x0
  void *v4; // x0
  __int64 v5; // x8
  __int64 v6; // x9
  void *v7; // x0

  v2 = *((unsigned __int8 *)this + 17);
  *(_QWORD *)this = off_6D8520;
  if ( !v2 && *((_DWORD *)this + 11) )
  {
    if ( ((*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 1) + 16LL))(
            *((_QWORD *)this + 1),
            *((_QWORD *)this + 4))
        & 1) != 0 )
    {
      v5 = *((int *)this + 11);
      v6 = *((_QWORD *)this + 3);
      *((_DWORD *)this + 11) = 0;
      *((_QWORD *)this + 3) = v6 + v5;
      if ( !*((_BYTE *)this + 16) )
        goto LABEL_5;
      goto LABEL_3;
    }
    v7 = (void *)*((_QWORD *)this + 4);
    *((_BYTE *)this + 17) = 1;
    *((_DWORD *)this + 11) = 0;
    if ( v7 )
    {
      operator delete[](v7);
      *((_QWORD *)this + 4) = 0;
      if ( !*((_BYTE *)this + 16) )
        goto LABEL_5;
      goto LABEL_3;
    }
  }
  if ( !*((_BYTE *)this + 16) )
    goto LABEL_5;
LABEL_3:
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
LABEL_5:
  v4 = (void *)*((_QWORD *)this + 4);
  if ( v4 )
    operator delete[](v4);
  google::protobuf::io::ZeroCopyOutputStream::~ZeroCopyOutputStream(this);
}

