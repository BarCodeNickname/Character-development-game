#pragma once
public ref class Work_params /*: public Work*/
{
public:
	int income;
	int time;
	System::String^ name;
	System::Drawing::Image^ gif;
	void set_params(System::String^ name_, int income_, int time_, System::Drawing::Image^ gif_path) {
		name = name_, income = income_; time = time_; gif = gif_path;
	}

};