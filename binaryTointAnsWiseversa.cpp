binary,ocatal,hexa-->int(decimal)
decimal-->binary(also string)


int main(){
	string s="f";
	int des=stoi(s,0,16);//instead of 16-->we can use 2,8 for required
	cout<<des<<endl;
	string bin=bitset<32>(des).to_string();//here 32 is no. of bits we can also it 8,16,64
	
	cout<<bin<<endl;
}
