i=0; i<str.size()-1; i++){
            for(int j=i+1; j<str.size();j++){
                if(str[i] == str[j]){
                    str.erase(str.begin() + j);
                    j--;
                }
            }
	    }