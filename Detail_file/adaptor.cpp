#include<iostream>
using namespace std;
//Two incompitable calsses(Abstract calsses)
class MediaPlayer {
public:
	virtual void play(char audioType, char* fileName)=0;
};
class  AdvancedMediaPlayer {
public:
	virtual void playVlc(char * fileName)=0;
	virtual void playMp4(char* fileName)=0;
};


//Create concrete classes implementing the AdvancedMediaPlayer interface.

 class VlcPlayer: public AdvancedMediaPlayer{
 public:
	 void playVlc(char * fileName) {
		cout<<"Playing vlc file. Name: " << fileName<<endl;
	}

	
		void playMp4(char* fileName) {
			//do nothing
		}
 };
 class Mp4Player : public AdvancedMediaPlayer{
 public:
	 void playMp4(char * fileName) {
		 cout << "Playing mp4 file. Name: " << fileName << endl;
	 }
	 void playVlc(char * fileName) {
		 //do nothing
	 }
 };

 //Create adapter class implementing the MediaPlayer interface.

 class MediaAdapter:public MediaPlayer {

	 AdvancedMediaPlayer *advancedMusicPlayer;

	public:
	//constructor
	 MediaAdapter(char audioType){

		 if (audioType=='v'){
			 advancedMusicPlayer = new VlcPlayer;

		 }
		 else if (audioType=='4'){
			 advancedMusicPlayer = new Mp4Player;
		 }
	 }

	//overriding play function
		 void play(char audioType, char * fileName) {

			 if (audioType=='v'){
				 advancedMusicPlayer->playVlc(fileName);
			 }
			 else if (audioType=='4'){
				 advancedMusicPlayer->playMp4(fileName);
			 }
		 }
 };

 class AudioPlayer :public MediaPlayer {
	 MediaAdapter *mediaAdapter;

	
 public:
	 void play(char audioType, char* fileName) {

			 //inbuilt support to play mp3 music files
			 if (audioType=='3'){
				 cout<<"Playing mp3 file. Name: " << fileName<<endl;
			 }

			 //mediaAdapter is providing support to play other file formats
			 else if (audioType=='v' || audioType=='4'){
				 mediaAdapter = new MediaAdapter(audioType);
				 mediaAdapter->play(audioType, fileName);
			 }

			 else{
				 cout<<"Invalid media. " <<audioType <<" format not supported";
			 }
		 }
 };
 int main()
 {
	 
                 AudioPlayer audioPlayer;
		 audioPlayer.play('3', "beyond the horizon.mp3");
		 audioPlayer.play('4', "alone.mp4");
		 audioPlayer.play('v', "far far away.vlc");
		 audioPlayer.play('a', "mind me.avi");
		 system("pause");
 }