/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E3930
 * Mangled: _ZN6google8protobuf2io16CodedInputStream7RefreshEv
 * Demangled: google::protobuf::io::CodedInputStream::Refresh(void)
 *
 * Callers: 1
 *   0x00000000001F9C30  google::protobuf::io::CodedInputStream::Refresh(void)
 *
 * Callees: 11
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F97A0  google::protobuf::io::CodedInputStream::PrintTotalBytesLimitError(void)
 *   0x00000000001F9C30  google::protobuf::io::CodedInputStream::Refresh(void)
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x0000000000201760  .memcpy
 *   0x0000000000201FD0  google::protobuf::internal::LogMessage::operator<<(int)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 74
 *   insn=0x00000000004E393C string=0x00000000004E3940 "T"
 *   insn=0x00000000004E394C string=0x00000000004E3950 "h.@"
 *   insn=0x00000000004E3958 string=0x00000000004E395C "i"
 *   insn=0x00000000004E3958 string=0x00000000004E3978 "j"
 *   insn=0x00000000004E395C string=0x00000000004E3960 "?"
 *   insn=0x00000000004E3964 string=0x00000000004E3968 "i"
 *   insn=0x00000000004E3968 string=0x00000000004E396C "j*@"
 *   insn=0x00000000004E396C string=0x00000000004E3970 "?"
 *   insn=0x00000000004E3974 string=0x00000000004E39C4 "h6@"
 *   insn=0x00000000004E3978 string=0x00000000004E397C "i2@"
 *   insn=0x00000000004E397C string=0x00000000004E3980 "H"
 *   insn=0x00000000004E3988 string=0x00000000004E398C "h*@"
 *   insn=0x00000000004E398C string=0x00000000004E3990 "?"
 *   insn=0x00000000004E3990 string=0x00000000004E3994 "`"
 *   insn=0x00000000004E399C string=0x00000000001F97A0 "0'"
 *   insn=0x00000000004E39C4 string=0x00000000004E39C8 "("
 *   insn=0x00000000004E39C8 string=0x00000000004E39CC "?"
 *   insn=0x00000000004E39C8 string=0x00000000004E3A2C "`"
 *   insn=0x00000000004E39D4 string=0x00000000005990AA "./../../../../Dependencies/protobuf/src/google/protobuf/io/coded_stream.cc"
 *   insn=0x00000000004E39E8 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000004E39EC string=0x00000000005991C9 "Reading dangerously large protocol message.  If the message turns out to be larger than "
 *   insn=0x00000000004E39F8 string=0x00000000004E39FC "a2@"
 *   insn=0x00000000004E39F8 string=0x00000000001FC210 "0'"
 *   insn=0x00000000004E39FC string=0x00000000004E3A00 "ty"
 *   insn=0x00000000004E3A04 string=0x0000000000599222 " bytes, parsing will be halted for security reasons.  To increase the limit (or to disable these warnings), see CodedInputStream::SetTotalBytesLimit() in goo..."
 *   insn=0x00000000004E3A18 string=0x00000000001FA500 "0'"
 *   insn=0x00000000004E3A20 string=0x00000000004E3A24 ""
 *   insn=0x00000000004E3A20 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000004E3A24 string=0x00000000004E3A28 "h6"
 *   insn=0x00000000004E3A34 string=0x00000000004E3A38 ""
 *   insn=0x00000000004E3A38 string=0x00000000004E3A3C "\t@"
 *   insn=0x00000000004E3A40 string=0x00000000004E3A44 "@"
 *   insn=0x00000000004E3A48 string=0x00000000004E3A4C "i"
 *   insn=0x00000000004E3A50 string=0x00000000004E3A54 ")"
 *   insn=0x00000000004E3A54 string=0x00000000004E3A58 "i\n"
 *   insn=0x00000000004E3A58 string=0x00000000004E3A5C "("
 *   insn=0x00000000004E3A5C string=0x00000000004E3AA0 "j"
 *   insn=0x00000000004E3A70 string=0x00000000004E3A74 "_J"
 *   insn=0x00000000004E3A78 string=0x00000000005992DF "CHECK failed: (buffer_size) >= (0): "
 *   insn=0x00000000004E3AA4 string=0x00000000004E3AA8 ")"
 *   insn=0x00000000004E3AA8 string=0x00000000004E3AAC "I"
 *   insn=0x00000000004E3AAC string=0x00000000004E3AB0 "M"
 *   insn=0x00000000004E3AB0 string=0x00000000004E3AB4 "h\n@"
 *   insn=0x00000000004E3AB0 string=0x00000000004E3AD8 "i\n@"
 *   insn=0x00000000004E3AB4 string=0x00000000004E3AB8 "i"
 *   insn=0x00000000004E3AB8 string=0x00000000004E3ABC "\t"
 *   insn=0x00000000004E3AC0 string=0x00000000004E3AC4 "i\n"
 *   insn=0x00000000004E3AC8 string=0x00000000004E3AE0 "j.E)l2@"
 *   insn=0x00000000004E3AD8 string=0x00000000004E3ADC ""
 *   insn=0x00000000004E3AE0 string=0x00000000004E3AE4 "l2@"
 *   insn=0x00000000004E3AE4 string=0x00000000004E3AE8 "h"
 *   insn=0x00000000004E3AEC string=0x00000000004E3AF0 "k}@"
 *   insn=0x00000000004E3AF4 string=0x00000000004E3AF8 ")"
 *   insn=0x00000000004E3AF8 string=0x00000000004E3AFC ""
 *   insn=0x00000000004E3AFC string=0x00000000004E3B00 "i\n"
 *   insn=0x00000000004E3B04 string=0x00000000004E3B08 "h."
 *   insn=0x00000000004E3B08 string=0x00000000004E3B0C "("
 *   insn=0x00000000004E3B0C string=0x00000000004E3B10 "h\n"
 *   insn=0x00000000004E3B28 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004E3B48 string=0x00000000004E3B4C "^w"
 *   insn=0x00000000004E3B68 string=0x00000000004E3B6C "h"
 *   insn=0x00000000004E3B74 string=0x00000000004E3B78 "7"
 *   insn=0x00000000004E3B7C string=0x00000000004E3B80 "J"
 *   insn=0x00000000004E3B94 string=0x00000000004E3B98 "h"
 *   insn=0x00000000004E3B9C string=0x00000000004E3BA0 ""
 *   insn=0x00000000004E3BA0 string=0x00000000004E3BA4 "h"
 *   insn=0x00000000004E3BA4 string=0x00000000004E3BA8 ""X"
 *   insn=0x00000000004E3BA8 string=0x00000000004E3BAC " "
 *   insn=0x00000000004E3BA8 string=0x00000000001F9C30 "0'"
 *   insn=0x00000000004E3BAC string=0x00000000004E3BB0 "h"
 *   insn=0x00000000004E3BB8 string=0x00000000004E3BBC "7"
 *   insn=0x00000000004E3BD8 string=0x00000000004E3BDC "h"
 *   insn=0x00000000004E3BE0 string=0x00000000004E3BE4 ""
 *   insn=0x00000000004E3BE4 string=0x00000000004E3BE8 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::io::CodedInputStream::Refresh(google::protobuf::io::CodedInputStream *this)
{
  int v2; // w8
  int v3; // w9
  int v4; // w9
  __int64 result; // x0
  int v6; // w8
  int v7; // w0
  __int64 v8; // x9
  int v9; // w8
  int v10; // w10
  int v11; // w9
  __int64 v12; // x8
  __int64 v13; // x9
  int v14; // w8
  int v15; // w10
  int v16; // w11
  int v17; // w12
  __int64 v18; // x9
  bool v19; // vf
  int v20; // w8
  _BYTE v21[36]; // [xsp+50h] [xbp-70h] BYREF
  int v22; // [xsp+74h] [xbp-4Ch] BYREF
  __int64 v23; // [xsp+78h] [xbp-48h] BYREF
  _BYTE v24[32]; // [xsp+88h] [xbp-38h] BYREF
  __int64 v25; // [xsp+A8h] [xbp-18h]

  v25 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *((_DWORD *)this + 11);
  if ( v2 > 0 || *((int *)this + 7) > 0 || (v3 = *((_DWORD *)this + 6), v3 == *((_DWORD *)this + 10)) )
  {
    v4 = *((_DWORD *)this + 12);
    if ( *((_DWORD *)this + 6) - v2 >= v4 && v4 != *((_DWORD *)this + 10) )
      google::protobuf::io::CodedInputStream::PrintTotalBytesLimitError(this);
    return 0;
  }
  else
  {
    v6 = *((_DWORD *)this + 13);
    if ( (v6 & 0x80000000) == 0 && v3 >= v6 )
    {
      google::protobuf::internal::LogMessage::LogMessage();
      google::protobuf::internal::LogMessage::operator<<(
        (int)v24,
        "Reading dangerously large protocol message.  If the message turns out to be larger than ");
      v7 = google::protobuf::internal::LogMessage::operator<<();
      google::protobuf::internal::LogMessage::operator<<(
        v7,
        " bytes, parsing will be halted for security reasons.  To increase the limit (or to disable these warnings), see "
        "CodedInputStream::SetTotalBytesLimit() in google/protobuf/io/coded_stream.h.");
      google::protobuf::internal::LogFinisher::operator=();
      google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v24);
      *((_DWORD *)this + 13) = -1;
    }
    if ( ((*(__int64 (__fastcall **)(_QWORD, __int64 *, int *))(**(_QWORD **)this + 16LL))(*(_QWORD *)this, &v23, &v22)
        & 1) != 0 )
    {
      v8 = v23;
      *((_QWORD *)this + 1) = v23;
      v9 = v22;
      *((_QWORD *)this + 2) = v8 + v22;
      if ( v9 < 0 )
      {
        google::protobuf::internal::LogMessage::LogMessage();
        google::protobuf::internal::LogMessage::operator<<((int)v21, "CHECK failed: (buffer_size) >= (0): ");
        google::protobuf::internal::LogFinisher::operator=();
        google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v21);
        v9 = v22;
      }
      v10 = *((_DWORD *)this + 6);
      v11 = v10 - (0x7FFFFFFF - v9);
      if ( v10 <= 0x7FFFFFFF - v9 )
      {
        v13 = *((_QWORD *)this + 2);
        v14 = v9 + v10;
      }
      else
      {
        v12 = *((_QWORD *)this + 2);
        *((_DWORD *)this + 7) = v11;
        v13 = v12 - v11;
        v14 = 0x7FFFFFFF;
        *((_QWORD *)this + 2) = v13;
      }
      v15 = *((_DWORD *)this + 10);
      v16 = *((_DWORD *)this + 11);
      v17 = *((_DWORD *)this + 12);
      *((_DWORD *)this + 6) = v14;
      if ( v17 < v15 )
        v15 = v17;
      v18 = v13 + v16;
      v19 = __OFSUB__(v14, v15);
      v20 = v14 - v15;
      *((_QWORD *)this + 2) = v18;
      if ( (v20 < 0) ^ v19 | (v20 == 0) )
      {
        *((_DWORD *)this + 11) = 0;
      }
      else
      {
        *((_DWORD *)this + 11) = v20;
        *((_QWORD *)this + 2) = v18 - v20;
      }
      return 1;
    }
    else
    {
      result = 0;
      *((_QWORD *)this + 1) = 0;
      *((_QWORD *)this + 2) = 0;
    }
  }
  return result;
}

