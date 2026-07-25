/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E2050
 * Mangled: sub_4E2050
 * Demangled: sub_4E2050
 *
 * Callers: 4
 *   0x00000000004E1F44  google::protobuf::MessageLite::SerializePartialToCodedStream(google::protobuf::io::CodedOutputStream *)
 *   0x00000000004E22CC  google::protobuf::MessageLite::AppendPartialToString(std::string *)
 *   0x00000000004E2420  google::protobuf::MessageLite::SerializeToArray(void *,int)
 *   0x00000000004E24B0  google::protobuf::MessageLite::SerializePartialToArray(void *,int)
 *
 * Callees: 11
 *   0x00000000001F55F0  google::protobuf::MessageLite::AppendPartialToString(std::string *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001F7CC0  google::protobuf::io::CodedOutputStream::~CodedOutputStream()
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000001FD9F0  google::protobuf::io::CodedOutputStream::CodedOutputStream(google::protobuf::io::ZeroCopyOutputStream *)
 *   0x00000000002034D0  google::protobuf::MessageLite::SerializePartialToCodedStream(google::protobuf::io::CodedOutputStream *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 37
 *   insn=0x00000000004E2060 string=0x00000000004E2064 "U"
 *   insn=0x00000000004E2078 string=0x00000000004E207C "`"
 *   insn=0x00000000004E2080 string=0x0000000000598D03 "./../../../../Dependencies/protobuf/src/google/protobuf/message_lite.cc"
 *   insn=0x00000000004E2094 string=0x00000000001F63F0 "0'"
 *   insn=0x00000000004E2098 string=0x0000000000598DBB "CHECK failed: (byte_size_before_serialization) == (byte_size_after_serialization): "
 *   insn=0x00000000004E20A0 string=0x00000000004E20A4 "[h"
 *   insn=0x00000000004E20A4 string=0x00000000001FC210 "0'"
 *   insn=0x00000000004E20A8 string=0x00000000004E20B0 "Xh"
 *   insn=0x00000000004E20A8 string=0x0000000000598E0F "Protocol message was modified concurrently during serialization."
 *   insn=0x00000000004E20BC string=0x00000000001FA500 "0'"
 *   insn=0x00000000004E20C0 string=0x00000000004E20C4 "K`"
 *   insn=0x00000000004E20C4 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000004E20C8 string=0x00000000004E20CC "`"
 *   insn=0x00000000004E20DC string=0x00000000004E20E0 "#"
 *   insn=0x00000000004E20E8 string=0x0000000000598E50 "CHECK failed: (bytes_produced_by_serialization) == (byte_size_before_serialization): "
 *   insn=0x00000000004E20F0 string=0x00000000004E20F4 "Gh"
 *   insn=0x00000000004E20F8 string=0x00000000004E2100 "Dh"
 *   insn=0x00000000004E20F8 string=0x0000000000598EA6 "Byte size calculation and serialization were inconsistent.  This may indicate a bug in protocol buffers or it may be caused by concurrent modification of the..."
 *   insn=0x00000000004E2110 string=0x00000000004E2114 "7`"
 *   insn=0x00000000004E2130 string=0x0000000000598F4D "This shouldn't be called if all the sizes are equal."
 *   insn=0x00000000004E2138 string=0x00000000004E213C "5h"
 *   insn=0x00000000004E214C string=0x00000000004E2150 "(`"
 *   insn=0x00000000004E2160 string=0x00000000004E2178 "VP"
 *   insn=0x00000000004E2178 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004E2180 string=0x00000000004E2184 "`"
 *   insn=0x00000000004E2184 string=0x00000000004E2188 ""
 *   insn=0x00000000004E21AC string=0x00000000004E21B0 "g"
 *   insn=0x00000000004E21C0 string=0x00000000004E21C4 "T"
 *   insn=0x00000000004E21D8 string=0x00000000001FD9F0 "0'"
 *   insn=0x00000000004E21F0 string=0x00000000001F7CC0 "0'"
 *   insn=0x00000000004E2200 string=0x00000000004E2204 "`"
 *   insn=0x00000000004E2200 string=0x00000000004E2218 ".P"
 *   insn=0x00000000004E222C string=0x00000000004E2230 "G"
 *   insn=0x00000000004E2240 string=0x00000000004E2244 "T"
 *   insn=0x00000000004E2280 string=0x00000000004E2284 "`"
 *   insn=0x00000000004E22AC string=0x00000000004E22B0 "'"
 *   insn=0x00000000004E22BC string=0x00000000001F55F0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_4E2050(int a1, int a2, int a3)
{
  int v5; // w0
  int v6; // w0
  _BYTE v7[32]; // [xsp+B8h] [xbp-98h] BYREF
  _BYTE v8[32]; // [xsp+E0h] [xbp-70h] BYREF
  _BYTE v9[32]; // [xsp+108h] [xbp-48h] BYREF
  __int64 v10; // [xsp+128h] [xbp-28h]

  v10 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a1 != a2 )
  {
    google::protobuf::internal::LogMessage::LogMessage();
    v5 = google::protobuf::internal::LogMessage::operator<<(
           (int)v9,
           "CHECK failed: (byte_size_before_serialization) == (byte_size_after_serialization): ");
    google::protobuf::internal::LogMessage::operator<<(
      v5,
      "Protocol message was modified concurrently during serialization.");
    google::protobuf::internal::LogFinisher::operator=();
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v9);
  }
  if ( a3 != a1 )
  {
    google::protobuf::internal::LogMessage::LogMessage();
    v6 = google::protobuf::internal::LogMessage::operator<<(
           (int)v8,
           "CHECK failed: (bytes_produced_by_serialization) == (byte_size_before_serialization): ");
    google::protobuf::internal::LogMessage::operator<<(
      v6,
      "Byte size calculation and serialization were inconsistent.  This may indicate a bug in protocol buffers or it may "
      "be caused by concurrent modification of the message.");
    google::protobuf::internal::LogFinisher::operator=();
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v8);
  }
  google::protobuf::internal::LogMessage::LogMessage();
  google::protobuf::internal::LogMessage::operator<<((int)v7, "This shouldn't be called if all the sizes are equal.");
  google::protobuf::internal::LogFinisher::operator=();
  google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v7);
}

