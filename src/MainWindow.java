import java.awt.BorderLayout;
import java.awt.Dimension;
import javax.swing.*;

public class MainWindow {

	/*
	 * Sets up the frame and basic work spaces. 
	 */
	private static void showMainWin() {
        //Set up main UI
        JFrame frame = new JFrame("Team iTeam - PaintBot");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        //Creates the two spaces
        JLabel robotspace = new JLabel("Robot Space");
        JLabel menuspace = new JLabel("Menu Space");
        
        //Sets preferred size for each space
        robotspace.setPreferredSize(new Dimension(650,650));
        menuspace.setPreferredSize(new Dimension(150, 150));
        
        //Specifies how to add the labels
        frame.getContentPane().add(robotspace, BorderLayout.WEST);
        frame.getContentPane().add(menuspace, BorderLayout.EAST);

        //Shows
        frame.pack();
        frame.setVisible(true);
    }
	
	
	/*
	 * Main Function
	 */
	public static void main(String[] args) {
		javax.swing.SwingUtilities.invokeLater(new Runnable() {
            public void run() {
            	showMainWin();
            }
        });
	}

}
