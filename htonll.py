import struct
#host to net
def htonll(Val):
	strNative = struct.pack('Q', Val)
	BEVal = struct.unpack('!Q', strNative)[0]
	return BEVal
	

#net to host
def ntohll(Val):
	strBE = struct.pack('!Q', Val)
	NativeVal = struct.unpack('Q', strBE)[0]
	return NativeVal
