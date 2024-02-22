typedef enum {
	Add,
	ShiftL,
	And,
	Not
} InstructionType deriving (Eq,FShow, Bits);

function Bit#(32) alu (InstructionType ins, Bit#(32) v1, Bit#(32) v2);
    // Create a result bitvector
    Bit#(32) res = 0;
    // Dispatch to function depending on instruction (not necessary, the
    // functions are simple enough so that we could inline the calculations)
    case (ins)
        Add: res = add(v1, v2);
        ShiftL: res = shiftl(v1, v2);
        And: res = bitwise_and(v1, v2);
        Not: res = bitwise_not(v1);
    endcase

	return res;
endfunction

function Bit#(32) add (Bit#(32) a, Bit#(32) b);
    return a + b;
endfunction

function Bit#(32) shiftl (Bit#(32) a, Bit#(32) b);
    return a << b;
endfunction

function Bit#(32) bitwise_and (Bit#(32) a, Bit#(32) b);
    return a & b;
endfunction

function Bit#(32) bitwise_not (Bit#(32) a);
    return ~a;
endfunction
